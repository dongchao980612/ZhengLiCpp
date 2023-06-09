#pragma once
#include "Stack.h"


class Calculator
{
public:
	void run();
	void clear();
private:
	Stack<double> s;
	void enter(double num);
	bool getTwoOperands(double &opnd1, double&opnd2);
	void compute(char op);
};

