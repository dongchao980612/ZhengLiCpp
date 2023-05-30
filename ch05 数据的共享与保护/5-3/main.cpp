#include<iostream>

using namespace std;

class Clock {										//时钟类定义
public:												//外部接口
	Clock();
	void setTime(int newH, int newM, int newS);		//函数原型作用域
	void showTime();
private:											//私有变量
	int hour, minute, second;
};

Clock::Clock() :hour(0), minute(0), second(0) {		//构造函数

}

void Clock::setTime(int newH, int newM, int newS) {		//局部作用域
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

Clock globClock;	//静态生存期

int main() {
	cout << "First time output " << endl;
	globClock.showTime();
	globClock.setTime(8, 30, 30);

	Clock myclock(globClock);
	cout << "Second time output " << endl;
	myclock.showTime();
	return 0;
}