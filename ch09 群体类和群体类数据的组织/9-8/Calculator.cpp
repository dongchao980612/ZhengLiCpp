#include"Calculator.h"
#include <string>
#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;

void Calculator::run()
{
	string str;
	while (cin >> str, str != "q")
	{
		switch (str[0])
		{
		case 'c':
			s.clear(); 
			break;

		}
	}
}

void Calculator::clear()
{
	s.clear();
}

void Calculator::enter(double num)
{
	s.push(num);
}

bool Calculator::getTwoOperands(double & opnd1, double & opnd2)
{
	return false;
}

void Calculator::compute(char op)
{
}
