#include<iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point::showCount();

	Point a(4, 5);
	cout << "Point A : (" << a.getX() << "," << a.getY() << ")\t";
	a.showCount();

	Point b(a);
	cout << "Point B : (" << b.getX() << "," << b.getY() << ")\t";
	b.showCount();

	const Point c(a);
	cout << "Point C : (" << c.getX() << "," << c.getY() << ")\t";
	c.showCount();

	Point::showCount();
}