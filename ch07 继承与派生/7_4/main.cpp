#include<iostream>

using namespace std;

class Base1 {
public:
	Base1(int i) {
		cout << "constructing Base1\t" << i << endl;
	}

};
class Base2 {
public:
	Base2(int j) {
		cout << "constructing Base2\t" << j << endl;
	}

};
class Base3 {
public:
	Base3(int k) {
		cout << "constructing Base3\t" << k << endl;
	}

};
class Derived :public Base2, public Base1, public Base3 {
public:
	Derived(int a, int b, int c, int d, int e, int f) :Base1(a), member2(d), member1(c), Base2(b), Base3(e), member3(f) {
	}

private:
	Base1 member1;
	Base2 member2;
	Base3 member3;
};

int main() {
	Derived obj = Derived(1, 2, 3, 4, 5, 6);
	// �̳й�����������Ա 
	// ��̳�˳�����Ա����˳���й�,���β��б�λ���޹� 
	return 0;
}