#include "LinearEqu.h".

#include <iostream>

using namespace std;

//���캯��
LinearEqu::LinearEqu(int size = 2) :Matrix(size) {
	sums = new double[size]; //��̬�����ڴ�
	solution = new double[size];
}
LinearEqu::~LinearEqu() {
	delete[] sums, solution;//�ͷ��ڴ�
}

//���̸�ֵ
void LinearEqu::setLinearEqu(const double *a, const double* b) {
	setMatrix(a);
	for (int i = 0; i < getSize(); i++)
	{
		sums[i] = b[i];
	}
}
//��������ʵ��
inline void swap(double& v1, double& v2) {
	double temp = v1;
	v1 = v2;
	v2 = temp;
}
//��ⷽ��
bool LinearEqu::solve() {
	int* js = new int[getSize()];//�洢סԺ��ɨ���кŵ�����
	for (int k = 0; k < getSize(); k++)
	{
		//ѡ��Ԫ��
		int is; //��Ԫ�����ڵ��к�
		double max = 0;//����Ԫ�ص����ֵ
		for (int i = k; i < getSize(); i++) {
			for (int j = k; j < getSize(); j++) {
				double t = fabs(element(i, j));
				if (t > max)
				{
					max = t;
					js[k] = j;
					is = i;
				}
			}
		}
		if (max == 0) {
			delete[]js;
			return false;
		}
		else {
			//ͨ�����л��� ����Ԫ�ؽ�������k�е�k��
			if (js[k] != k) {
				for (int i = 0; i < getSize(); i++)
				{
					swap(element(i, k), element(i, js[k]));
				}
			}
			if (is != k) {
				for (int j = k; j < getSize(); j++) {
					swap(element(k, j), element(is, j));
				}
				swap(sums[k], sums[is]);
			}
		}

		//��ȥ����
		double major = element(k, k);
		for (int j = k + 1; j < getSize(); j++) {
			element(k, j) /= major;
		}
		sums[k] /= major;

		for (int i = 0; i < getSize(); i++) {
			for (int j = 0; j < getSize(); j++) {
				element(i, j) -= element(i, k)*element(k, j);
			}
			sums[i] -= element(i, k)*sums[k];
		}
	}
	//�ж�ʣ��һ��Ԫ���Ƿ���0
	double d = element(getSize() - 1, getSize() - 1);
	if (fabs(d) < 1e-15) {
		delete[] js;
		return false;
	}

	//�ش�����
	solution[getSize() - 1] = sums[getSize() - 1] / d;
	for (int i = getSize(); i >=0; i--){
		double t = 0.0;
		for (int j = i + 1; j < getSize() - 1; j++) {
			t += element(i, j)*solution[j];
		}
		solution[i] = sums[i] - t;
	}

	js[getSize() - 1] = getSize() - 1;
	for (int k = getSize()-1; k>=0 ; k--)
	{
		if (js[k] != k) {
			swap(solution[k], solution[js[k]]);
		}
	}

	delete[] js;

	return true;
}


//��ʾ����
void LinearEqu::printLinearEqu() const {
	cout << "The Line eqution is :" << endl;
	for (int i = 0; i < getSize(); i++)
	{
		for (int j = 0; j < getSize(); j++) {
			cout << element(i, j) << " ";
		}
		cout << "\t\t" << sums[i] << endl;
	}
}
//��ʾ���̵Ľ�
void LinearEqu::printSolution()const {
	cout << "The Result is :" << endl;
	for (int i = 0; i < getSize(); i++)
	{
		cout << "x[" << i << "] = " << solution[i] << endl;
	}
}