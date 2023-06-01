#include<iostream>

using namespace std;

void splitfloat(float n, int*ip, float*fp)
{
	*ip = (int)n;
	*fp = n - *ip;
}
int main()
{
	cout << "enter 1 float point number:" << endl;
	for (int i = 0; i < 1; i++)
	{
		float x, f;
		int n;

		cin >> x;
		splitfloat(x, &n, &f);
		cout << "integer part = " << n << ",fraction part = " << f;
	}
}