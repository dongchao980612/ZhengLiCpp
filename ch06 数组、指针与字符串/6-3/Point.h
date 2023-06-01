#pragma once
class Point
{
public:
	Point();
	Point(int x, int y);
	Point(const Point& p) {
		x = p.x;
		y = p.y;
	}
	void move(int newX, int newY);
	int getX()const;
	int getY()const;
	~Point();

private:
	int x, y;
};
