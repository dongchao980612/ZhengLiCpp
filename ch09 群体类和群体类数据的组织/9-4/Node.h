#pragma once

//������ģ�涨��
template<class T>
class Node
{
public:
	Node(const T&data, Node<T>*next = 0);
	void insertAfter(Node<T>* p);
	Node<T>* deleteAfter();
	Node<T>* nextNode();
	const Node<T>* nextNode()const;

private:
	T data;//������
	Node<T>* list;//T����ָ�룬���ڴ�Ŷ�̬����������ڴ��׵�ַ
};

template <class T>
Node<T> ::Node(const T&data, Node<T>*next) :data(data), next(next) {}

template<class T>
inline void Node<T>::insertAfter(Node<T>* p)
{
	p->next = next;
	next = p;
}

template<class T>
inline Node<T>* Node<T>::deleteAfter()
{
	Node<T>*tempPtr = next;
	if (next == 0) {
		return 0;
	}
	next = tempPtr->next;
	return tempPtr;
}

template<class T>
inline Node<T>* Node<T>::nextNode()
{
	return next;
}

template<class T>
inline const Node<T>* Node<T>::nextNode() const
{
	return next;
}
