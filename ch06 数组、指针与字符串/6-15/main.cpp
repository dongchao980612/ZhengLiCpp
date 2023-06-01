#include<iostream>

using namespace std;

class Point
{
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
		count++;
	}
	Point(Point& p) {
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() {
		count--;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	static void showCount() {				//属于整个类，不属于任何一个对象
		cout << "object count = " << count << endl;
	}
private:
	int x, y;
	static int count;
};

int Point::count = 0;


int main()
{
	void(*funptr)() = &Point::showCount;

	Point a(4, 5);
	cout << "Point a:" << a.getX() << " " << a.getY() << endl;
	funptr();

	Point b(a);
	cout << "Point b:" << b.getX() << " " << b.getY() << endl;
	funptr();

	return 0;
}