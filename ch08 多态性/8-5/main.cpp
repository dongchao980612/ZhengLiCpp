
#include<iostream>

using namespace std;

class Base {
public:
	virtual ~Base();
};
Base::~Base() {
	cout << __FUNCTION__ << endl;
}
class Derived :public Base {
public:
	Derived();
	~Derived();
private:
	int* p;
};
Derived::Derived() {
	this->p = new int(10);
	// cout << *(this->p) << endl;
}
Derived::~Derived() {
	cout << __FUNCTION__ << endl;
	delete p;
}
void fun(Base* b) {
	delete b;
}
int main() {

	Base *b = new Derived();
	fun(b);
	return 0;
}