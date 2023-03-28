#include<iostream>

using namespace std;

template<class DataType>
class Node
{
public:
	DataType data;
	Node<DataType> *next;
};

template<class DataType>
class LinkList
{
public:
	LinkList(DataType a[], int n);
	DataType Get(int i);
	int Locate(DataType x);
	void Insert(int i, DataType x);
	DataType Delete(int i);
	int Length();
	void PrintList();
	void Rever();
private:
	Node<DataType> *first;

};
//�вι���
template<class DataType>
LinkList<DataType>::LinkList(DataType a[], int n)
{
	first = new Node<int>;
	first->next = NULL;
	for (int i = 0; i < n; i++) {
		Node<int> *s = new Node<int>;
		s->data = a[i];
		s->next = first->next;
		first->next = s;
	}
}
//��������
template<class DataType>
void LinkList<DataType>::PrintList()
{
	Node<int> *p = first->next;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	if (p == NULL) {
		cout << endl;
	}
}
//���빦��
template<class DataType>
void LinkList<DataType>::Insert(int i, DataType x)
{
	Node<int> *p = first;
	int count = 0;
	while (p != NULL && count < i - 1) {
		p = p->next;
		count++;
	}
	if (p == NULL)throw"λ��";
	else {
		Node<int> *s = new Node<int>;
		s->data = x;
		s->next = p->next;
		p->next = s;
	}
}
//ɾ������
template<class DataType>
DataType LinkList<DataType>::Delete(int i)
{
	Node<int> *p = first;
	Node<int> *q;
	int count = 0;
	while (p != NULL && count < i - 1) {
		p = p->next;
		count++;
	}
	if (p == NULL || p->next == NULL)
		throw"λ��";
	else {
		q = p->next;
		int x = q->data;
		p->next = q->next;
		delete q;
		return x;
	}
}
//��λ����
template<class DataType>
DataType LinkList<DataType>::Get(int i)
{
	Node<int> *p = first->next;
	int count = 1;
	while (p != NULL && count < i) {
		p = p->next;
		count++;
	}
	if (p == NULL)throw"λ��";
	else return p->data;
}
//����
template<class DataType>
int LinkList<DataType>::Length()
{
	Node<int> *p = first->next;
	int count = 0;
	while (p != NULL) {
		p = p->next;
		count++;
	}
	return count;
}


//��ֵ
template<class DataType>
void LinkList<DataType>::Rever()
{
	Node<int> *prev = NULL;
	Node<int> *next;
	Node<int> *p = first->next;
	while (p != NULL) {
		next = p->next;
		p->next = prev;
		prev = p;
		p = next;
	}
	first->next = prev;

}


int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int n = 10;
	LinkList<int> list(a, n);
	cout << list.Length() << endl;
	list.PrintList();

	//����
	list.Insert(3, 4);
	list.PrintList();

	//ɾ��
	list.Delete(3);
	list.PrintList();

	//����
	cout << list.Get(3) << endl;

	//����
	list.Rever();
	list.PrintList();

	return 0;
}
