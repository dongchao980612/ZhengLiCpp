#include<iostream>
#include<cmath>
using namespace std;

class A {
public:
	//�����ݳ�Աֻ�����б��ʼ��
	A(int a) :a(a) {	
		// this->a=a;// ����
		
	}
	void print() {
		cout << a << ":" << b << endl;
	}
private:
	const int a; 		//�����ݳ�Ա
	static const int b;	//��̬�����ݳ�Ա
};
const int A::b = 90;    //��̬�ݳ�Ա��Ҫ�����ڶ���֮���������ڶ����ڳ�ʼ��

int main() {
	A a1(100), a2(10);

	a1.print();
	a2.print();

}