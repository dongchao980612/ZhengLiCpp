#include <iostream>

using namespace std;

int main() 
{
	double values[5] = { 1.23,35.36,653.7,43598.24 };
	cout.fill('-');// Ìî³ä×Ö·û
	for (int i = 0; i < 4; ++i) 
	{
		cout.width(10);
		cout << values[i] << endl;
	}
	return 0;
}