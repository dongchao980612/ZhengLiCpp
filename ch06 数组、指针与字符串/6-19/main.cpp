#include<iostream>

using namespace std;

constexpr auto W1 = 3;
constexpr auto W2 = 10;
constexpr auto W3 = 10;

int main()
{
	int(*fp)[W2][W3] = new int[W1][W2][W3];

	int mat[W1][W2][W3] = { 0 };
	for (size_t i = 0; i < W1; i++)
	{
		for (size_t j = 0; j < W2; j++)
		{
			for (size_t k = 0; k < W3; k++)
			{
				fp[i][j][k] = i * 100 + j * 10 + k;
				mat[i][j][k] = i * 100 + j * 10 + k;
			}
		}
	}

	for (size_t i = 0; i < W1; i++)
	{
		for (size_t j = 0; j < W2; j++)
		{
			for (size_t k = 0; k < W3; k++)
			{
				cout << mat[i][j][k] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}

	delete[] fp;
	return 0;
}