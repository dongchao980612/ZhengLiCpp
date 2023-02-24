#include<iostream>

using namespace std;

class Clock  										//时钟类的定义
{
public:												//共有接口
	Clock(int newH, int newM, int newS);
	Clock() {
		hour = 0;
		minute = 0;
		second = 0;
	}

	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:											//私有数据成员
	int hour, minute, second;
};
Clock::Clock(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::showTime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}
int main()
{
#if 1
	Clock myclock;									//创建对象

	myclock.setTime();								//设置时间
	cout << "第一次时间设置与输出:\n";
	myclock.showTime();								//显示时间

	myclock.setTime(8, 30, 30);						//设置时间
	cout << "第二次时间设置与输出:\n";				//显示时间
	myclock.showTime();
#endif
	Clock c1(0, 0, 0);
	c1.showTime();
	Clock c2;
	c2.showTime();

	return 0;
}
