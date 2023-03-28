#include<iostream>
#include<cmath>
using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {}
	Point(Point& p) {
		x = p.x;
		y = p.y;
		cout << "Point(Point& p)" << endl;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

	friend float dist(Point& p1, Point& p2);   //不发生复制构造
	float dist1(Point& p1, Point& p2);
private:
	int x, y;
};
float dist1(Point& p1, Point& p2)
{
	return static_cast<float>(sqrt((p1.getX() - p2.getX()) * (p1.getX() - p2.getX()) + (p1.getY() - p2.getY()) * (p1.getY() - p2.getY())));
}
float dist(Point& p1, Point& p2) {
	return static_cast<float>(sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y)));
}

int main() {
	Point p1(1, 1), p2(4, 5);
	cout << "The distence is " << dist(p1, p2) << endl;
	cout << "The distence is " << dist1(p1, p2) << endl;
}