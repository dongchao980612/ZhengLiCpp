#include"Calculator.h"
#include <iostream>

using namespace std;

int main()
{
#if 0
	Stack<int> s;
	cout << "��ʼ��ջs:" << endl;
	cout << "ջsΪ" << (s.isEmpty() ? "��" : "�ǿ�") << "\t" << (s.isFull() ? "��" : "����") << endl;
	int arr[] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		s.push(arr[i]);
		cout << "ջsΪ" << (s.isEmpty() ? "��" : "�ǿ�") << "\t" << (s.isFull() ? "��" : "����") << endl;
	}
	cout << "���5������ջs:" << endl;
	cout << "ջsΪ" << (s.isEmpty() ? "��" : "�ǿ�") << "\t" << (s.isFull() ? "��" : "����") << endl;
	// s.push(arr[0]);  error
#endif

	Calculator c;
	c.run();
	return 0;

	return 0;
}