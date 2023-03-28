#include<iostream>

using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) { count++; }
	Point(const Point& p);
	~Point() {
		count--;
	};
	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}
	static void showCount();
private:
	int x, y;
	static int count;
};

Point::Point(const Point& p) :x(p.x), y(p.y)
{
	count++;
	cout << __FUNCTION__<< endl;
}
void Point::showCount()  				//属于整个类，不属于任何一个对象
{
	cout << "object count = " << count << endl;
}

int Point::count = 0;

int main()
{
	Point::showCount(); // 0

	Point a(4, 5);
	cout << "Point A : (" << a.getX() << "," << a.getY() << ")\t";
	Point::showCount(); // 0

	Point b(a);
	cout << "Point B : (" << b.getX() << "," << b.getY() << ")\t";
	Point::showCount();// 1
}