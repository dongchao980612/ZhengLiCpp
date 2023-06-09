
#include<iostream>

using namespace std;

class Base1 {   //抽象类
public:
	virtual void display() const = 0;
};

class Base2 : public Base1 {
public:
	void display()const;
};
void Base2::display()const {
	cout << __FUNCTION__ << endl;
}

class Derived :public Base2 {
public:
	void display()const;
};
void Derived::display()const {
	cout << __FUNCTION__ << endl;
}
void fun(Base1* ptr) {
	ptr->display();
}
int main() {
	// Base1 base1;// 抽象类无法被实例化
	Base2 base2;
	Derived derived;

	fun(&base2);
	fun(&derived);
	return 0;
}