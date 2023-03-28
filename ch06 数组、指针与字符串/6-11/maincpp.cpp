#include<iostream>
#include <cmath>
using namespace std;

#define M_PI acos(-1);

const float PI = M_PI;
const float TWO_PI = PI * 2;

void printStuff(float data)
{
	cout << __FUNCTION__ << "\t" << data << endl;
}
void printMessage(float data)
{
	cout << __FUNCTION__ << "\t" << data << endl;
}
void printFloat(float data)
{
	cout << __FUNCTION__ << "\t" << data << endl;
}
int main()
{
#if 0
	void(*functionPointer)(float);
	
	printStuff(PI);
	functionPointer = printStuff;
	functionPointer(PI);
	functionPointer(TWO_PI);
	cout << "**************************" << endl;

	printMessage(PI);
	functionPointer = printMessage;
	functionPointer(PI); 
	functionPointer(TWO_PI);
	cout << "**************************" << endl;

	printFloat(PI);
	functionPointer = printFloat;
	functionPointer(PI);
	functionPointer(TWO_PI);
#endif
#if 1
	typedef  void(*functionPointer)(float);
	functionPointer fp = NULL;
	fp = printStuff;
	fp(PI);
	fp(TWO_PI);
	cout << "**************************" << endl;

	fp = printMessage;
	fp(PI);
	fp(TWO_PI);
	cout << "**************************" << endl;

	fp = printFloat;
	fp(PI);
	fp(TWO_PI);
	cout << "**************************" << endl;
#endif
	return 0;
}