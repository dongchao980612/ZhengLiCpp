#include <iostream>

using namespace std;

//��ӡ����
template<class T>
void print(T a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

// ��������
template<class T>
void insertionSort(T arr[], int n)
{
	if (arr == NULL || n == 0)
	{
		return;
	}

	for (int i = 1; i < n; i++)
	{
		T temp = arr[i];//���Ʋ���Ԫ��
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

// ��������
template<class T>
void insertionSort1(T arr[], int n)
{
	if (arr == NULL || n == 0)
	{
		return;
	}

	for (int i = 1; i < n; i++)
	{
		T temp = arr[i];//���浱ǰԪ��
		int j;//������λ��
		for (j = 0; j < i; j++)
		{
			//��������λ�õ�Ԫ�رȵ�ǰԪ�ش�˵���ҵ��˺���λ��
			//����j��¼��ǰλ��
			if (arr[j] > temp) 
				break;
		}

		//�ӵ�ǰλ�ÿ�ʼ�ƶ�Ԫ�أ��ô�����λ�ÿճ���
		for (int k = i; k > j; k--)
		{
			arr[k] = arr[k - 1];
		}

		//�ѵ�ǰԪ�ز��뵽������λ��
		arr[j] = temp;
	}
}


int main()
{
	int testArr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	int arrLen = sizeof(testArr) / sizeof(testArr[0]);
	cout << "ԭʼ���飺" << endl;
	print(testArr, arrLen);
	// insertionSort(testArr, arrLen);
	insertionSort1(testArr, arrLen);
	cout << "��������飺" << endl;
	print(testArr, arrLen);
	return 0;
}