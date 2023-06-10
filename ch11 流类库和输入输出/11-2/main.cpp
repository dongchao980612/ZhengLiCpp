#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	double values[5] = { 1.23,35.36,653.7,4358.24 };
	string name[] = { "Zoot","Jimmy","Al","Stan" };
	cout.fill('-');// Ìî³ä×Ö·û
	
	for (int i = 0; i < 4; ++i) 
	{
		cout << setw(6)<<name[i]<<setw(10)<<values[i] << endl;

		cout.width(6);
		cout << name[i] << setw(10)<<values[i] << endl;

		cout << endl;
	}
}