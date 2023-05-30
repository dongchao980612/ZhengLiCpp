#include<iostream>
#include<cmath>
using namespace std;

class R {
public:
	R(int r1, int r2) :r1(r1), r2(r2) {}
	void print();
	void print() const;
private:
	int r1, r2;
};
void R::print() {
	cout << r1 << ":" << r2 << endl;
}

void R::print() const{
	cout << r1 << ":" << r2 << endl;
}

int main() {
	R r1(5, 4);
	r1.print();

	const R r2 = R(20, 52);
	r2.print();

	const R r3(60, 85);
	r3.print();

}