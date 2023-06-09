#include "matrix.h"
#include <iostream>

using namespace std;

//构造函数
Matrix::Matrix(int size):size(size) {
	elem = new double[size*size];

	for (size_t i = 0; i < size*size; i++)
	{
		elem[i] = 0;
	}
}
//析构函数
Matrix::~Matrix() {
	delete[] elem;
}
//矩阵赋初值
void Matrix::setMatrix(const double *value) {
	for (size_t i = 0; i < size*size; i++)
	{
		elem[i] = value[i];
	}
}
void Matrix::printMatrix() {
	cout << "The Matrix is :" << endl;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << element (i,j)<<" ";
		}
		cout << endl;
	}
}
int Matrix::getSize()const
{
	return size;
}
double& Matrix::element(int i, int j) {
	return elem[i*size + j];
}

double Matrix::element(int i, int j) const
{
	return elem[i*size + j];
}

