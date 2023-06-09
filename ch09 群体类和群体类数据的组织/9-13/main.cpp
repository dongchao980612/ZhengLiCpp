#include <iostream>

using namespace std;

//��������
template<class T>
void mySwap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

template<class T>
void print(T a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

// ð������
template<class T>
void bubbleSort(T arr[], int n)
{
	for (int i = 1; i < n; i++) 
	{
		for (int j = 0; j < (n - 1); j++) 
		{
			if (arr[j] > arr[j + 1])
			{
				mySwap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	int testArr[] = { 5,4,10,20,12,3 };
	int arrLen = sizeof(testArr) / sizeof(testArr[0]);
	cout << "ԭʼ���飺" << endl;
	print(testArr, arrLen);
	bubbleSort(testArr, arrLen);
	cout << "��������飺" << endl;
	print(testArr, arrLen);
	return 0;
}