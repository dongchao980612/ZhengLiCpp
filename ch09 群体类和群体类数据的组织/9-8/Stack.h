#pragma once

#include<cassert>
template<class T,int SIZE=5>
class Stack
{
public:
	Stack();				//���캯��
	void push(const T &item);//��ջ
	T pop();				//��ջ
	void clear();			//���
	const T& peek()const;	//��ȡջ��Ԫ��
	bool isEmpty() const;	//�п�
	bool isFull() const;	//����
private:
	T list[SIZE];			//���� ���ڴ��ջ��Ԫ��
	int top;				//ջ��ָ��
};

//���캯��
template<class T, int SIZE>
inline Stack<T, SIZE>::Stack()
{
	this->top = -1;
}

//��ջ
template<class T, int SIZE>
inline void Stack<T, SIZE>::push(const T &item)
{
	assert(!isFull());
	list[++top] = item; //����Ԫ��ѹ��ջ
}

//��ջ
template<class T, int SIZE>
inline T Stack<T, SIZE>::pop()
{
	assert(!isEmpty());
	return list[top--]; //����ջ��ָ�룬�����䵯��ջ��
}

//���
template<class T, int SIZE>
inline void Stack<T, SIZE>::clear()
{
	top = -1;
}

//��ȡջ��Ԫ��
template<class T, int SIZE>
inline const T & Stack<T, SIZE>::peek() const
{
	assert(!isEmpty());
	return list[top]; //����ջ��Ԫ��
}

//�п�
template<class T, int SIZE>
inline bool Stack<T, SIZE>::isEmpty() const
{
	return top == -1;
}

//����
template<class T, int SIZE>
inline bool Stack<T, SIZE>::isFull() const
{
	return top == (SIZE - 1);
}
