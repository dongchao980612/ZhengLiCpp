#ifndef MATRIX__H
#define MATRIX__H


class Matrix //����Matrix����
{
public:
	Matrix(int size); //���캯��
	~Matrix();//��������
	void setMatrix(const double *value);//���󸳳�ֵ
	void printMatrix();
	int getSize() const ; //�õ�����Ĵ�С
	double& element(int i, int j);
	double element(int i, int j)const;
private:
	int size; //����Ĵ�С
	double * elem;//�����������׵�ַ
};


#endif // !MATRIX__H

