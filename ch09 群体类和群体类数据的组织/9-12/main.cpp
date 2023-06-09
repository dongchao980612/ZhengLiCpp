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

// ѡ������
template<class T>
void selectSort(T arr[], int n)
{
	if (arr == NULL || n == 0)
	{
		return;
	}

	for (int i = 0; i < n-1; i++)
	{
		int lastIndex = i;
		for (int j = i+1; j < n; j++)
		{
			
			if (arr[j] < arr[lastIndex])
			{
				lastIndex = j;
			}
		}
		//cout << arr[i] <<" "<< arr[lastIndex] << endl;
		mySwap(arr[i], arr[lastIndex]);
		print(arr, n);
	}
}

int main()
{
	int testArr[] = { 5,4,10,20,12,3 };
	int arrLen = sizeof(testArr) / sizeof(testArr[0]);
	cout << "ԭʼ���飺" << endl;
	print(testArr, arrLen);
	selectSort(testArr, arrLen);
	cout << "��������飺" << endl;
	print(testArr, arrLen);
	return 0;
}