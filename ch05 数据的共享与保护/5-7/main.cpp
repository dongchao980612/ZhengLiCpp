#include<iostream>
#include<cmath>
using namespace std;

class R {
public:
	R(int r1, int r2) :r1(r1), r2(r2) {}
	void print();
	void print1() const;
private:
	int r1, r2;
};
void R::print() {
	r1 = 10; //������
	cout << r1 << ":" << r2 << endl;
}
void R::print1() const {
	// r1 = 10; //����
	cout << r1 << ":" << r2 << endl;
}
int main() {
	R r1(1, 1);
	r1.print();

	const R r2(4, 5);
	r2.print1();

}