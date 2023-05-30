#include<iostream>

using namespace std;

class Point {
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
	static void showCount() {				//���������࣬�������κ�һ������
		cout << "object count = " << count << endl;
	}
private:
	int x, y;
	static int count;
};

int Point::count = 0;//�����ʼ�� 

int main() {
	Point::showCount(); // 0

	Point a(4, 5);
	cout << "Point A : (" << a.getX() << "," << a.getY() << ")\t";
	Point::showCount(); // 1

	Point b(a);
	cout << "Point B : (" << b.getX() << "," << b.getY() << ")\t";
	Point::showCount();// 2
	return 0;
}