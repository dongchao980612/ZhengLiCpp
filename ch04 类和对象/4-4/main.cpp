#include<iostream>
#include<cmath>

using namespace std;

class Point {
public:
	Point(int xx, int yy) {
		x = xx;
		y = yy;
	}
	Point(Point &p);
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:
	int x, y;
};

Point::Point(Point &p) {
	x = p.x;
	y = p.y;
	cout << "����Point�ĸ��ƹ��캯��" << endl;
}


//  ������
class Line {
public:
	Line(Point xp1, Point xp2);
	Line(Line &l);
	double getLen() {
		return len;
	}
private:
	Point p1,p2;
	double len;
};
// ����::����(�βα�) :��Ƕ����1(�βα�), ��Ƕ����2(�βα�)
Line::Line(Point xp1, Point xp2) :p1(xp1), p2(xp2) {
	double x = double(p1.getX() - p2.getX());
	double y = double(p1.getY() - p2.getY());
	len = sqrt(x*x + y * y);
	cout << "����Line�Ĺ��캯��" << endl;
}
Line::Line(Line &l) :p1(l.p1), p2(l.p2) {
	len = l.len;
	cout << "����Line�ĸ��ƹ��캯��" << endl;
}
int main() {
	Point myp1(1, 1), myp2(4, 5);

	Line line1(myp1, myp2);
	cout << endl;

	Line line2(line1);
	cout << endl;

	cout << "line1�ĳ���:" << line1.getLen() << endl;
	cout << "line2�ĳ���:" << line2.getLen() << endl;

	return 0;
}