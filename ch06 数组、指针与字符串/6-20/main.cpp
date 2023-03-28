#include<iostream>
#include <vector>
using namespace std;
double average(vector<double>& arr)
{
	double sum = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sum += arr[i];
	}

	return sum / arr.size();
}
int main()
{
	int n = 5;
	vector<double> arr(5);
	cout << "please input " << n << " number:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "average = " << average(arr) << endl;
}