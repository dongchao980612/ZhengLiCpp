#include<iostream>

using namespace std;

class Base1 {
public:
	virtual void display() const;
};
void Base1::display()const {
	cout << __FUNCTION__ << endl;
}

class Base2 :public Base1 {
	void display() const;  //覆盖基类的虚函数
};
void Base2::display()const {
	cout << __FUNCTION__ << endl;
}

class Derived :public Base2 {
	void display() const;   //覆盖基类的虚函数
};
void Derived::display()const {
	cout << __FUNCTION__ << endl;
}

void fun(Base1& obj) {
	obj.display();
}
int main() {
	Base1 base1;
	Base2 base2;
	Derived derived;

	// derived.Base2::display(); //error

	fun(base1);
	fun(base2);
	fun(derived);

	return 0;
}