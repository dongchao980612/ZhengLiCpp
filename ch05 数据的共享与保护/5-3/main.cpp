#include<iostream>

using namespace std;

class Clock {										//ʱ���ඨ��
public:												//�ⲿ�ӿ�
	Clock();
	void setTime(int newH, int newM, int newS);		//����ԭ��������
	void showTime();
private:											//˽�б���
	int hour, minute, second;
};

Clock::Clock() :hour(0), minute(0), second(0) {		//���캯��

}

void Clock::setTime(int newH, int newM, int newS) {		//�ֲ�������
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

Clock globClock;	//��̬������

int main() {
	cout << "First time output " << endl;
	globClock.showTime();
	globClock.setTime(8, 30, 30);

	Clock myclock(globClock);
	cout << "Second time output " << endl;
	myclock.showTime();
	return 0;
}