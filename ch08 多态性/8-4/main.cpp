#include<iostream>

using namespace std;

//***************Base1************************//
class Base1 {
public:
	virtual void display() const;
};
void Base1::display()const {
	cout << __FUNCTION__ << endl;
}
//***************Base2************************//
class Base2 :public Base1 {
	void display() const;
};
void Base2::display()const {
	cout << __FUNCTION__ << endl;
}
//***************Derived************************//
class Derived :public Base2 {
	void display() const;
};
void Derived::display()const {
	cout << __FUNCTION__ << endl;
}
//***************fun************************//
void fun(Base1& obj) {
	obj.display();
}
int main() {
	Base1 base1;
	Base2 base2;
	Derived derived;

	fun(base1);
	fun(base2);
	fun(derived);

	return 0;
}