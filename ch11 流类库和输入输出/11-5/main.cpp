#include<fstream>

using namespace std;

typedef struct Date {
	int month, day, year;
}Date;

int main()
{
	Date dt = { 6,10,92 };
	ofstream file("date.dat", ios_base::binary);
	file.write(reinterpret_cast<char*>(&dt), sizeof(dt));
	file.close();
}