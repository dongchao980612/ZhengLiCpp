#include<iostream>
#include<fstream>
#include <cstring>

using  namespace std;

struct SalareyInfo
{
	unsigned id;
	double salary;
};
int main()
{
	SalareyInfo employee1 = { 60001,8000 };
	ofstream os("payroll", ios_base::out | ios_base::binary);
	os.write(reinterpret_cast<char*> (&employee1), sizeof(employee1));
	os.close();

	ifstream is("payroll", ios_base::in | ios_base::binary);
	if (is)
	{
		SalareyInfo employee2;
		is.read(reinterpret_cast<char*> (&employee2), sizeof(employee2));
		cout << employee2.id << "\t" << employee2.salary << endl;
	}
	else {
		cout << "Error : cannot open file!"<<endl;
	}
	is.close();

	return 0;
}
