#include<iostream>
#include <string>

using namespace std;

void test(const char* title, bool value)
{
	cout << title << "\treturns\t" << (value ? "true" : "false") << endl;
}
int main()
{
	string s1 = "DEF";
	cout << "s1 = " << s1 << endl;

	string s2;
	cout << "enter to s2:";
	cin >> s2;
	cout << "len of s2 = " << s2.length() << endl;

	test("s1<=\"abc\"", s1 < "abc");
	test("\"def\"<=s1", "def" <= s1);

	s2 += s1;
	cout << "s2 = s1 + s2:" << s2 << endl;
	cout << "len of s2 = " << s2.length() << endl;
	return 0;
}