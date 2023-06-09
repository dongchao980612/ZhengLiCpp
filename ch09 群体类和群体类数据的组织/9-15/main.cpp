#include <iostream>

using namespace std;

// 二分查找
template<class T>
int binSearch(T arr[], int n, int target)
{
	if (arr == NULL || n == 0)
	{
		return -1;
	}

	int left = 0, right = n - 1;

	while (left <= right)
	{
		int mid = (left + right);
		if (target == arr[mid]) {
			return mid;
		}
		else if (target < arr[mid])
		{
			right = mid - 1;
		}
		else if (target > arr[mid])
		{
			left = mid + 1;
		}
	}

	return -1;
}
int main()
{
	int testArr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	int arrLen = sizeof(testArr) / sizeof(testArr[0]);

	cout << (binSearch(testArr, arrLen, 20) > 0 ? "找到了" : "没找到") << endl;
}