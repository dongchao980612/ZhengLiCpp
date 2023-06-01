#include<iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point p[2];
	cout << "(" << p[0].getX() << "," << p[0].getY() << ")" << endl;
	cout << "(" << p[1].getX() << "," << p[1].getY() << ")" << endl;
	for (int i = 0; i < 2; i++)
		p[i].move(i + 10, i + 20);
	cout << "(" << p[0].getX() << "," << p[0].getY() << ")" << endl;
	cout << "(" << p[1].getX() << "," << p[1].getY() << ")" << endl;


	return 0;
}
