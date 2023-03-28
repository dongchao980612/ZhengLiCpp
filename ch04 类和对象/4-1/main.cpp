#include<iostream>

using namespace std;

// #define DEBUG_ON
#ifdef DEBUG_ON
#define PRINT_DEBUG cout<<"LINE:"<<__LINE__<<"\tFUNCTION:"<<__FUNCTION__<<endl;
#else
#define PRINT_DEBUG
#endif // DEBUG_ON

class Clock  										//ʱ����Ķ���
{
public:												//���нӿ�
	Clock(int newH, int newM, int newS);
	Clock() {
		hour = 0;
		minute = 0;
		second = 0;
	}

	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:											//˽�����ݳ�Ա
	int hour, minute, second;
};
Clock::Clock(int newH, int newM, int newS) {
	PRINT_DEBUG;
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::setTime(int newH, int newM, int newS)
{
	PRINT_DEBUG;
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::showTime()
{
	PRINT_DEBUG;
	cout << hour << ":" << minute << ":" << second << endl;
}
int main()
{
#if 0
	Clock myclock;									//��������

	myclock.setTime();								//����ʱ��
	cout << "��һ��ʱ�����������:\n";
	myclock.showTime();								//��ʾʱ��

	myclock.setTime(8, 30, 30);						//����ʱ��
	cout << "�ڶ���ʱ�����������:\n";				//��ʾʱ��
	myclock.showTime();
#endif

#if 1
	Clock c1(0, 0, 0);
	c1.showTime();
	Clock c2;
	c2.showTime();
#endif
	return 0;
}
