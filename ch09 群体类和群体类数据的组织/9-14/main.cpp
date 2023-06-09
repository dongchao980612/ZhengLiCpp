#include <iostream>

using namespace std;

// 顺序查找
template<class T>
int seqSearch(T arr[], int n, int target)
{
	if (arr == NULL || n == 0)
	{
		return -1;
	}

	for (int i = 0; i < n; i++)
	{
		if (target == arr[i])
		{
			return i;
		}
	}

	return -1;
}
int main()
{
	int testArr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	int arrLen = sizeof(testArr) / sizeof(testArr[0]);

	cout << (seqSearch(testArr, arrLen, 0) > 0 ? "找到了" : "没找到") << endl;
}