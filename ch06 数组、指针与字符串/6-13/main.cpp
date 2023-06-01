#include<iostream>

using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {};
	int getX()const { return x; }
	int getY()const { return y; }
private:
	int x, y;
};
int main()
{
	Point a(4, 5);
	Point*pa = &a;

	int (Point::*funcPtr)()const = &Point::getX;

	cout << a.getX() << endl;
	cout << pa->getX() << endl;

	cout << (a.*funcPtr)() << endl;
	cout << (pa->*funcPtr)() << endl;
}