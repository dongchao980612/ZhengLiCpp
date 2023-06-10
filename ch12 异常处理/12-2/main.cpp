#include<iostream>
#include<string>

using namespace std;

class MyException
{
public:
	MyException(const string & message) {}
	~MyException() {}
	const string& getMessage() {
		return message;
	}

private:
	string message;
};
class Demo
{
public:
	Demo() {
		cout << "Constructor of Demo" << endl;
	}
	~Demo() {
		cout <<  "Destructor of Demo" << endl;
	}

};

void fun() throw(MyException)
{
	Demo d;
	cout << "Throw MyException in fun()" << endl;
	throw MyException("exception thrown by fun()");
}
int main()
{
	cout << "In main function" << endl;
	try
	{
		fun();
	}
	catch (MyException & e)
	{
		cout <<"Caught an exception:" <<e.getMessage() << endl;
	}

	cout << "Resume the exception of main()" << endl;
	return 0;
}