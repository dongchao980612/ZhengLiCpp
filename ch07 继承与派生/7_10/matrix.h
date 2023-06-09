#ifndef MATRIX__H
#define MATRIX__H


class Matrix //基类Matrix定义
{
public:
	Matrix(int size); //构造函数
	~Matrix();//析构函数
	void setMatrix(const double *value);//矩阵赋初值
	void printMatrix();
	int getSize() const ; //得到矩阵的大小
	double& element(int i, int j);
	double element(int i, int j)const;
private:
	int size; //矩阵的大小
	double * elem;//矩阵存放数组首地址
};


#endif // !MATRIX__H

