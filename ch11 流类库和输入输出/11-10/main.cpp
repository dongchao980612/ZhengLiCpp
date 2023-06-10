#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	int value[] = { 3,7,0,5,4 };
	ofstream of("integers", ios_base::out | ios_base::binary);
	of.write(reinterpret_cast<char*>(value), sizeof(value));
	of.close();

	ifstream is("integers", ios_base::in | ios_base::binary);
	if (is)
	{
		is.seekg(3 * sizeof(int));
		int v;
		is.read(reinterpret_cast<char*> (&v), sizeof(v));
		cout << "The 4th integer in the file 'integers' is " << v << endl;
	}
	else {
		cout << "Error : cannot open file!" << endl;
	}
	is.close();
	return 0;
}