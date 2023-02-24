#include<iostream>
using namespace std;
class SavingAccount
{
public:
	SavingAccount(int date, int id, double rate);
	~SavingAccount();
	int getId() {
		return id;
	}
	double getBalance() {
		return balance;
	}
	double getRate() {
		return rate;
	}
	//存入
	void deposit(int date, double amount);

	//取出
	void withdraw(int date, double amount);

	//结算利息
	void settle(int date);

	//显示账户信息
	void show();



private:
	int id;//账号
	double balance;//余额
	double rate;//存款的年利率
	int lastDate;//上次变更余额的时期
	double accumulation; //余额按日累计之和

	//记录一笔账 date为日期 amount为金额 desc为说明
	void record(int date, double amount);

	//获得到指定日期为止的存款金额按日累计值
	double accumulate(int date)
	{
		return accumulation + balance * (date - lastDate);
	}
};

SavingAccount::SavingAccount(int date, int id, double rate)
{
	this->id = id;
	this->balance = 0;
	this->rate = rate;
	this->lastDate = date;
	this->accumulation = 0;
	cout << "date:" << date << "\t#" << id << " 被创建了..." << endl;
}

SavingAccount::~SavingAccount()
{
}
void SavingAccount::deposit(int date, double amount)
{
	return record(date, amount);
}
void SavingAccount::withdraw(int date, double amount)
{
	if (amount > getBalance())
	{
		cout << "error" << endl;
	}
	else
	{
		record(date, -amount);
	}
}
void SavingAccount::settle(int date)
{
	double interest = accumulate(date)*rate / 365;
	if (0 != interest)
	{
		record(date, interest);
	}
	accumulation = 0;
}
void SavingAccount::show()
{
	cout << "#" << id << "\t 余额:" << balance << endl;
}
void SavingAccount::record(int date, double amount)
{
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;
	balance += amount;
	cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}
int main()
{
	//创立几个账户
	SavingAccount sa0(1, 001, 0.015);
	SavingAccount sa1(1, 002, 0.015);
	cout << endl;

	cout << "时间\tid\t金额\t余额" << endl;
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	sa0.settle(90);
	sa1.settle(90);

	cout << endl;
	sa0.show();
	sa1.show();

	return 0;
}