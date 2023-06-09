#include"Calculator.h"
#include <iostream>

using namespace std;

int main()
{
#if 0
	Stack<int> s;
	cout << "初始化栈s:" << endl;
	cout << "栈s为" << (s.isEmpty() ? "空" : "非空") << "\t" << (s.isFull() ? "满" : "非满") << endl;
	int arr[] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		s.push(arr[i]);
		cout << "栈s为" << (s.isEmpty() ? "空" : "非空") << "\t" << (s.isFull() ? "满" : "非满") << endl;
	}
	cout << "添加5个数后栈s:" << endl;
	cout << "栈s为" << (s.isEmpty() ? "空" : "非空") << "\t" << (s.isFull() ? "满" : "非满") << endl;
	// s.push(arr[0]);  error
#endif

	Calculator c;
	c.run();
	return 0;

	return 0;
}