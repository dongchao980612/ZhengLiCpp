#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point(int x = 0, int y = 0) :x(x), y(y) { count++; }
	Point(const Point&p);
	~Point() { count--; }
	int getX() { return x; }
	int getX() const { return x; }
	int getY() { return y; }
	int getY() const { return y; }
	static void showCount();
private:
	int x, y;
	static int count;
};


#endif // !POINT_H
