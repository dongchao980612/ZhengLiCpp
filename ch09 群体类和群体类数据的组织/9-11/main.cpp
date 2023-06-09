#include <iostream>

using namespace std;

//打印函数
template<class T>
void print(T a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

// 插入排序
template<class T>
void insertionSort(T arr[], int n)
{
	if (arr == NULL || n == 0)
	{
		return;
	}

	for (int i = 1; i < n; i++)
	{
		T temp = arr[i];//复制插入元素
		int j = i;
		while ((j > 0) && (temp < arr[j - 1]))
		{
			//cout << "i = " << i << " j = " << j << " temp = " << temp << " arr[j - 1]" << arr[j - 1] << endl;
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = temp;
	}
}

// 插入排序
template<class T>
void insertionSort1(T arr[], int n)
{
	if (arr == NULL || n == 0)
	{
		return;
	}

	for (int i = 1; i < n; i++)
	{
		T temp = arr[i];//保存当前元素
		int j;//待插入位置
		for (j = 0; j < i; j++)
		{
			//当待插入位置的元素比当前元素大，说明找到了合适位置
			//并用j记录当前位置
			if (arr[j] > temp) 
				break;
		}

		//从当前位置开始移动元素，让待插入位置空出来
		for (int k = i; k > j; k--)
		{
			arr[k] = arr[k - 1];
		}

		//把当前元素插入到待插入位置
		arr[j] = temp;
	}
}


int main()
{
	int testArr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	int arrLen = sizeof(testArr) / sizeof(testArr[0]);
	cout << "原始数组：" << endl;
	print(testArr, arrLen);
	// insertionSort(testArr, arrLen);
	insertionSort1(testArr, arrLen);
	cout << "排序后数组：" << endl;
	print(testArr, arrLen);
	return 0;
}