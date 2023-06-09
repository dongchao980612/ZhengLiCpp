#pragma once

#include<cassert>
template<class T,int SIZE=5>
class Stack
{
public:
	Stack();				//构造函数
	void push(const T &item);//入栈
	T pop();				//出栈
	void clear();			//清空
	const T& peek()const;	//获取栈顶元素
	bool isEmpty() const;	//判空
	bool isFull() const;	//判满
private:
	T list[SIZE];			//数组 用于存放栈的元素
	int top;				//栈顶指针
};

//构造函数
template<class T, int SIZE>
inline Stack<T, SIZE>::Stack()
{
	this->top = -1;
}

//入栈
template<class T, int SIZE>
inline void Stack<T, SIZE>::push(const T &item)
{
	assert(!isFull());
	list[++top] = item; //将新元素压入栈
}

//出栈
template<class T, int SIZE>
inline T Stack<T, SIZE>::pop()
{
	assert(!isEmpty());
	return list[top--]; //返回栈顶指针，并将其弹出栈顶
}

//清空
template<class T, int SIZE>
inline void Stack<T, SIZE>::clear()
{
	top = -1;
}

//获取栈顶元素
template<class T, int SIZE>
inline const T & Stack<T, SIZE>::peek() const
{
	assert(!isEmpty());
	return list[top]; //返回栈顶元素
}

//判空
template<class T, int SIZE>
inline bool Stack<T, SIZE>::isEmpty() const
{
	return top == -1;
}

//判满
template<class T, int SIZE>
inline bool Stack<T, SIZE>::isFull() const
{
	return top == (SIZE - 1);
}
