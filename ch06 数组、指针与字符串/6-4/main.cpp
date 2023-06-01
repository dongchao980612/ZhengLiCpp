#include<iostream>
#include<cmath>
#include<cerrno>
#include "Point.h"

using namespace std;

float lineFit(const Point points[], int npoint)
{
	float avgX = 0, avgY = 0;
	float lxx = 0, lyy = 0, lxy = 0;
	for (int i = 0; i < npoint; i++) {
		avgX += points[i].getX() / npoint;
		avgY += points[i].getY() / npoint;
	}

	for (int i = 0; i < npoint; i++) {
		lxx += (points[i].getX() - avgX)*(points[i].getX() - avgX);
		lyy += (points[i].getY() - avgY)*(points[i].getY() - avgY);
		lxy += (points[i].getX() - avgY)*(points[i].getY() - avgY);
	}
	cout << "This line acn be fitted by y=a*x+b." << endl;
	cout << "a = " << lxy / lxx << " ";
	cout << "b = " << avgY - lxy * avgX / lxx << endl;

	return static_cast<float>(lxy / sqrt(lxx*lyy));
}

int main()
{
	Point P1[10] = { Point(6,10),Point(14,20),Point(26,30),Point(33,40),Point(46,50),Point(54,60),Point(67,70),Point(75,80),Point(84,90),Point(100,100) };

	float r = 0;
	r = lineFit(P1, 10);
	cout << "Line coefficient r = " << r;

	return 0;
}