#include<iostream>

using namespace std;


class Point
{
public:
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	Point(Point &p)
	{
		x = p.x;
		y = p.y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:
	int x, y;
};

//�����β�����Ķ���
void fun1(Point p)
{
	cout << p.getX() << endl;
}
//��������ֵ����Ķ���
Point fun2()
{
	Point a(1, 2);//������
	return a;
}

int main()
{

	Point a(4, 5);

	// ���һ�������ʼ����һ������
	Point b(a);
	Point c = a;
	cout << b.getX() << "\t" << c.getX() << endl;//4       4

	//�����β�����Ķ���
	fun1(b); //4

	//��������ֵ����Ķ���
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