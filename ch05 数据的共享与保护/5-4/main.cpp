#include<iostream>

using namespace std;

class Point {					//Point �ඨ��
public:								//�ⲿ�ӿ�
	Point(int x, int y) {			//���캯��
		this->x = x;
		this->y = y;
		count++;
	}
	Point(Point& p) {					//���ƹ��캯��
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
	static int count;			// ��̬���ݳ�Ա
};

int Point::count = 0; //�����ʼ������Ȼ�����̬���ݳ�Ա��˽�����ͣ�������ȴ����ֱ�ӳ�ʼ���������ֳ��ϣ��������ط��Ͳ�����ֱ�ӷ����ˡ�

int main() {
	Point a(4, 5);
	cout << "Point A : (" << a.getX() << "," << a.getY() << ")\t";
	a.showCount();

	Point b(a);
	cout << "Point B : (" << b.getX() << "," << b.getY() << ")\t";
	b.showCount();
	return 0;
}