#include<iostream>
#include<string>

#include <exception>

using namespace std;

double area(double a, double b, double c)throw(invalid_argument)
{
	if (a < 0 || b < 0 || c < 0)
	{
		throw invalid_argument("the side length should be positive");
	}
	//判断三边长是否满足三角不等式

	if (a + b <= c || b + c <= a || c + a <= b)

		throw invalid_argument("the side length should fit the triangle inequation");

	//由Heron公式计算三角形面积

	double s = (a + b + c) / 2;

	return sqrt(s*(s - a)*(s - b)*(s - c));


}
int main()
{
	int a, b, c;
	a = 3, b = 4, c = 5;
	try
	{
		cout << "area = " << area(a, b, c);
	}
	catch (const std::exception& e)
	{
		cout << "Error:" << e.what() << endl;
	}
}