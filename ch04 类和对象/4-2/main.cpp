#include<iostream>

using namespace std;

// #define DEBUG_ON
#ifdef DEBUG_ON
#define PRINT_DEBUG cout<<"LINE:"<<__LINE__<<"\tFUNCTION:"<<__FUNCTION__<<endl;
#else
#define PRINT_DEBUG
#endif // DEBUG_ON


class Point
{
public:
	Point(int xx = 0, int yy = 0) {
		PRINT_DEBUG;
		x = xx;
		y = yy;
	}
	Point(Point &p)
	{
		PRINT_DEBUG;
		x = p.x;
		y = p.y;
	}
	int getX() {
		PRINT_DEBUG;
		return x;
	}
	int getY() {
		PRINT_DEBUG;
		return y;
	}
private:
	int x, y;
};

//函数形参是类的对象
void fun1(Point p)
{
	cout << p.getX() << endl;
}
//函数返回值是类的对象
Point fun2()
{
	Point a(1, 2);//会消亡
	return a;
}

int main()
{

	Point a(4, 5);

	// 类的一个对象初始化另一个对象
	Point b(a);
	Point c = a;
	cout << b.getX() << "\t" << c.getX() << endl;//4       4

	//函数形参是类的对象
	fun1(b); //4

	//函数返回值是类的对象
	b = fun2();
	cout << b.getX() << endl;//1

#if 0

	Point a(4, 5);
	Point b = a;
	cout << b.getX() << endl;
	fun1(b);
	b = fun2();
	cout << b.getX() << endl;

#endif
	return 0;
}