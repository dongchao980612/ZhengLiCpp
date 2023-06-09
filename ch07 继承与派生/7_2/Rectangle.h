#ifndef RECTANGLE__H
#define RECTANGLE__H

#include "Point.h"

class Rectangle :private Point
{
public:
	void initRectangle(float x, float y, float w, float h) {
		initPoint(x, y);
		this->w = w;
		this->h = h;
	}
	void move(float offx, float offy) { Point::move(offx, offy); }
	float getX()const { return Point::getX(); }
	float getY()const { return Point::getY(); }
	float getW()const { return w; }
	float getH()const { return h; }
private:
	float w, h;
};
#endif // !RECTANGLE__H
