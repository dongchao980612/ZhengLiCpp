#include<iostream>

using namespace std;
int i = 1;			//�ֲ�����,��̬������

void other() {
	static int a = 3, b; //�ڶ��ν��벻�ᱻ��ʼ��
	int c = 10;
	a += 2;
	i += 32;
	c += 5;
	cout << "---OTHER---" << endl;
	cout << "i : " << i << " a : " << a << " b : " << b << " c : " << c << endl;
	// 33 5 0 15
	// 75 7 0 15

}
int main() {

	static int a;		//��̬�ֲ�������ȫ������
	int b = -10, c = 0;		//�ֲ��������ֲ�����

	cout << "---MAIN---" << endl;
	cout << "i : " << i << " a : " << a << " b : " << b << " c : " << c << endl;
	// 1 0 -10 0
	c += 8;
	other();
	cout << "---MAIN---" << endl;
	cout << "i : " << i << " a : " << a << " b : " << b << " c : " << c << endl;
	//33 0 -10 8 
	i += 10;
	other();
	return 0;
}