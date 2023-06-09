#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<iterator>
#include<string>
#include<list>
using namespace std;

int main()
{
	string name1[] = { "Alice","Helen","Lucy","Susan" };
	string name2[] = { "Bob","David","Levin","Mike" };

	list<string> s1(name1, name1 + 4);
	list<string> s2(name2, name2 + 4);

	//��s1�ĵ�һ��Ԫ�طŵ�s2�����

	//�ȼ���s2.splice(s2.end(), s1, s1.begin(),++s1.begin());

	s2.splice(s2.end(), s1, s1.begin()); //s2.end()ָ��s2���Ԫ�صĺ�һ��

	list<string>::iterator iter1 = s1.begin();//iter1ָ��s1��

	advance(iter1, 2);//iter1ǰ��2��Ԫ�أ�����ָ��s1��3��Ԫ��

	list<string>::iterator iter2 = s2.begin();//iter2ָ��s2��

	++iter2;//iter2ǰ��1��Ԫ�أ�����ָ��s2��2��Ԫ��

	list<string>::iterator iter3 = iter2;//��iter2��ʼ��iter3

	advance(iter3, 2);//iter3ǰ��2��Ԫ�أ�����ָ��s2�ĵ�4��Ԫ��

	//��[iter2,iter3)��Χ�ڵĽڵ�ӵ�s1��iter1ָ��Ľڵ�ǰ

	s1.splice(iter1, s2, iter2, iter3);


	//�ֱ�s1��s2���
	copy(s1.begin(), s1.end(), ostream_iterator<string>(cout, " "));

	cout << endl;

	copy(s2.begin(), s2.end(), ostream_iterator<string>(cout, " "));

	cout << endl;

	return 0;
}