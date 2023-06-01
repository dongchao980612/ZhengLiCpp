#include<iostream>

using namespace std;

class Point
{
public:
	Point() :x(0), y(0) {
		cout << "Default construct called" << endl;
	};
	Point(int x, int y) :x(x), y(y) {
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
private:
	int x, y;
};

int main()
{
	Point* ptr1 = new Point;
	Point* ptr2 = new Point();

	cout << ptr1->getX() << "," << ptr1->getY() << endl;
	cout << ptr2->getX() << "," << ptr2->getY() << endl;
	delete ptr1, ptr2;

	ptr1 = new Point(1, 2);
	cout << ptr1->getX() << "," << ptr1->getY() << endl;
	delete ptr1;
	return 0;
}