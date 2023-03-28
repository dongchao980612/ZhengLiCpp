#include<iostream>

using namespace std;

class Point
{
public:
	Point() :x(0), y(0) {
		cout << "Default construct called" << endl;
	};
	Point(int x, int t) :x(x), y(x) {
		cout << "construct called" << endl;
	};
	~Point() {
		cout << "Deconstruct called" << endl;
	}
	int getX()const {
		return x;
	}
	int getY()const {
		return y;
	}
	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};
class ArrayOfPoints
{
public:
	ArrayOfPoints(int size) :size(size) {
		points = new Point[size];
	}
	~ArrayOfPoints() {
		cout << "delete ..." << endl;
		delete[] points;
	}
	Point& getElement(int index)
	{
		return 	points[index];
	}
private:
	Point* points;
	int size;
};
int main()
{
	int count = 2;
	ArrayOfPoints points(count);
	points.getElement(0).move(5, 0);
	points.getElement(1).move(15, 20);

	return 0;
}