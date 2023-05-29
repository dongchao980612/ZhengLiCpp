#include<iostream>

using namespace std;

class Clock  										// ʱ����Ķ���
{
public:												// ���нӿ�
	Clock(int newH, int newM, int newS);			// ���캯��
	Clock() {
		hour = 0;
		minute = 0;
		second = 0;
	}

	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:											// ˽�����ݳ�Ա
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
	cout << hour << ":" << minute << ":" << this->second << endl;
}
int main()
{
#if 1
	Clock myclock;									// ��������
	// cout << sizeof(myclock) << endl;  // 12

	myclock.setTime();								// ����ʱ��
	cout << "��һ��ʱ�����������:\n";
	myclock.showTime();								// ��ʾʱ��
	 
	myclock.setTime(8, 30, 30);						// ����ʱ��
	cout << "�ڶ���ʱ�����������:\n";				// ��ʾʱ��
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
