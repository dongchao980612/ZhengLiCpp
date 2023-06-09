#ifndef LINEAREQU__H
#define LINEAREQU__H

#include "matrix.h"
class LinearEqu :public Matrix
{
public:
	LinearEqu(int size); //���캯��
	~LinearEqu();
	void setLinearEqu(const double *a, const double *b); //���̸�ֵ
	bool solve();//��ⷽ��
	void printLinearEqu()const; //��ʾ����
	void printSolution()const; //��ʾ���̵Ľ�
	
private:
	double* sums;//�����Ҷ���
	double* solution;//���̵Ľ�
};

#endif // !LINEAREQU__H

