#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	double values[] = { 1.23,35.36,653.7,4358.24 };
	string name[] = { "Zoot","Jimmy","Al","Stan" };

	cout.fill('-');// ����ַ�
	cout << setiosflags(ios_base::fixed); //ȡ����ѧ������

	for (int i = 0; i < 4; i++)
	{
		cout << setiosflags(ios_base::left)
			<< setw(6) << name[i]
			<< setiosflags(ios_base::right)
			<< setw(10) <<setprecision(1)<< values[i] << endl;
	}
	return 0;
}