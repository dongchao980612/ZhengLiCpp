#include<iostream>

using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) { count++; }
	Point(const Point& p) :x(p.x), y(p.y) { count++; }
	~Point() { count--; }
	int getX()const { return x; }
	int getY()const { return y; }
	static int count;
private:
	int x, y;

};
int Point::count = 0;

int main()
{
	int *ptr = &Point::count;
	Point a(4, 5);
	cout << "Point a:" << a.getX() << " " << a.getY() << endl;
	cout << "object count = " << *ptr << endl;

	Point b(a);
	cout << "Point b:" << b.getX() << " " << b.getY() << endl;
	cout << "object count = " << *ptr << endl;
	return 0;
}