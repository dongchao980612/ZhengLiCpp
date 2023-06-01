#include "Point.h"

#include <iostream>
using namespace std;

Point::Point()
{
	x = y = 0;
	cout << "Default constructor called" << endl;
}

Point::Point(int x, int y) :x(x), y(y)
{
	cout << "Constructor called" << endl;
}

int Point::getX()const
{
	return x;
}

int Point::getY()const
{
	return y;
}

void Point::move(int newX, int newY)
{
	x = newX;
	y = newY;
	cout << "moving the point to (" << newX << "," << newY << ")" << endl;
}

Point::~Point()
{
	cout << "Destructor called" << endl;
}

