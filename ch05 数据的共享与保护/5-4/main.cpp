#include<iostream>

using namespace std;

class Point {					//Point 类定义
public:								//外部接口
	Point(int x, int y) {			//构造函数
		this->x = x;
		this->y = y;
		count++;
	}
	Point(Point& p) {					//复制构造函数
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
	void showCount() {
		cout << "object count = " << count << endl;
	}
private:
	int x, y;
	static int count;			// 静态数据成员
};

int Point::count = 0; //类外初始化，虽然这个静态数据成员是私有类型，在这里却可以直接初始。除了这种场合，在其他地方就不允许直接访问了。

int main() {
	Point a(4, 5);
	cout << "Point A : (" << a.getX() << "," << a.getY() << ")\t";
	a.showCount();

	Point b(a);
	cout << "Point B : (" << b.getX() << "," << b.getY() << ")\t";
	b.showCount();
	return 0;
}