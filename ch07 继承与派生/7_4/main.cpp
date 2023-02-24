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
	Base3() {
		cout << "constructing Base3\t*" << endl;
	}

};
class Derived :public Base2, public Base1, public Base3 {
public:
	Derived(int a, int b, int c, int d) :Base1(a), member2(d), member1(c), Base2(b) {}

private:
	Base1 member1;
	Base2 member2;
	Base3 member3;
};

int main() {
	Derived obj = Derived(1, 2, 3, 4);
	// 继承构造与新增成员 
	// 与继承顺序与成员定义顺序有关,与形参列表位置无关 
	return 0;
}