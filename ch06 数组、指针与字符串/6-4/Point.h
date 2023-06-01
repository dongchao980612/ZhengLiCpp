#ifndef POINT_h
#define POINT_h

class Point
{
public:
	Point(int x, int y) :x(x), y(y) {};
	int getX()const { return x; };
	int getY()const { return y; };

private:
	int x, y;
};
#endif // !POINT_h