#include<iostream>

using namespace std;

class Point
{
public:
	Point() :x(0), y(0) {
		cout << "Default construct called" << endl;
	};
	Point(int x, int y) :x(x), y(x) {
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
		cout << "create ..." << endl;
		points = new Point[size];
	}
	~ArrayOfPoints() {
		cout << "delete ..." << endl;
		delete[] points;
	}
	Point& getElement(int index) {
		return 	points[index];
	}
private:
	Point* points;
	int size;
};
int main()
{
	int count = 2;

	ArrayOfPoints pointsArray1(count);

	pointsArray1.getElement(0).move(5, 10);
	pointsArray1.getElement(1).move(15, 20);

	ArrayOfPoints pointsArray2 = pointsArray1;

	cout << "copy of pointsArray1" << endl;
	cout << "point_0 of array2\t" << pointsArray2.getElement(0).getX() << "," << pointsArray2.getElement(0).getY() << endl;
	cout << "point_1 of array2\t" << pointsArray2.getElement(0).getX() << "," << pointsArray2.getElement(0).getY() << endl;

	pointsArray1.getElement(0).move(25, 30);
	pointsArray1.getElement(1).move(35, 40);

	cout << "after move  of pointsArray1" << endl;

	cout << "point_0 of array2\t" << pointsArray2.getElement(0).getX() << "," << pointsArray2.getElement(0).getY() << endl;
	cout << "point_1 of array2\t" << pointsArray2.getElement(0).getX() << "," << pointsArray2.getElement(0).getY() << endl;

	return 0;
}