#include <iostream>
#include"matrix.h"
#include"LinearEqu.h"
using namespace std;

int main()
{
	const int size = 4;
	Matrix mat(size);
	double a[]={
			0.2368, 0.2471, 0.2568, 1.2671,
			0.1968, 0.2071, 1.2168, 0.2271,
			0.1581, 1.1675, 0.1768, 0.1871,
			1.1161, 0.1254, 0.1397, 0.1490
	};
	double b[] = { 1.8471,1.7471,1.6471,1.5471 };//∑Ω≥Ã”“∂ÀœÓ
	//mat.setMatrix(a);
	//mat.printMatrix();

	LinearEqu equ(size);
	equ.setLinearEqu(a, b);
	equ.printLinearEqu();
	if (equ.solve())
	{
		equ.printSolution();
	}
	else
	{
		cout << "\nFail£°£°£°" << endl;
	}
	

	return 0;
}