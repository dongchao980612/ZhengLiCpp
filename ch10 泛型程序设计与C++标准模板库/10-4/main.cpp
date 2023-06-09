#include<iostream>
#include<list>
#include<iterator>
#include<deque>

using namespace std;

//���ָ��������˳��������Ԫ��
template<class T>
void printContainer(const char * msg, const T& s) {
	cout << msg << ": ";
	copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main()
{
	int arr[] = { 0,9,8,6,4,3,2,1,5,4 };
	//�ӱ�׼�������6������,�����Ƿֱ��s��ͷ������
	deque<int> s;
	for (int i = 0; i < 10; i++) {
		// int x;
		// cin >> x;

		s.push_front(arr[i]);
	}
	printContainer("deque at first", s);

	//��s���������ݵ��������б�����l
	list<int> l(s.rbegin(), s.rend());
	printContainer("list at first", l);

	//���б�����ÿ������������˳��ߵ�
	list<int>::iterator iter = l.begin();
	while (iter != l.end()) {
		int v = *iter;
		iter = l.erase(iter);
		l.insert(++iter, v);
	}
	printContainer("list at last", l);

	//���б�����l�����ݸ�s��ֵ,��s���
	s.assign(l.begin(), l.end());
	printContainer("deque at last", s);


	return 0;
}
