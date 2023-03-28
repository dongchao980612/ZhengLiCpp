#include<cassert>
#include<iostream>
#include<iomanip>
using namespace std;

//������ģ�涨��
template<class T>
class Array
{
private:
	T* list;//T����ָ�룬���ڴ�Ŷ�̬����������ڴ��׵�ַ
	int size;//�����С��Ԫ�ظ�����
public:
	Array(int size = 50);//���캯��
	Array(const Array<T>& a);//���ƹ��캯��
	~Array();//��������

	Array<T>& operator=(const Array<T>& rhs);//���� = ,ʹ����������帳ֵ

	T& operator[](int i);//���ء�[]����ʹ��Array���������c++��ͨ���������
	const T& operator[](int i) const;//"[]"���const������

	operator T* ();//T * ��ָ��T��ָ�� //���ص�T*���͵�ת����ʹ��Array���������c++��ͨ���������
	operator const T* ()const;//��T*���͵�ת�����const������

	int getsize()const;//ȡ����Ĵ�С
	void resize(int size);//�޸�����Ĵ�С
};

//���캯�� 
template<class T>
Array<T>::Array(int sz)
{
	assert(sz >= 0);
	size = sz;
	list = new T[size];
}

//�������� 
template<class T>
Array<T>::~Array()
{
	delete[] list;
}

//���ƹ��캯��
template<class T>
Array<T>::Array(const Array<T>& a)
{
	//�Ӷ���a��ȡ�����С
	size = a.size;
	//Ϊ���������ڴ沢���г�����
	list = new T[size];//��̬����size��T���͵�Ԫ�ؿռ�
	//�Ӷ���a��������Ԫ�ص�������
	for (int i = 0; i < size; i++) {
		list[i] = a.list[i];
	}
}

//���ء�=���������������rhs��ֵ��������ʵ�ֶ����ϵ����帳ֵ
template<class T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
	//��ǰ����ĵ�ַ��ͬ���������Ķ���rhs
	if (&rhs != this) {
		//�����������ڴ��С��rhs��ͬ����ɾ������ԭ���ڴ沢���·����ڴ�
		if (size != rhs.size) {
			delete[] list;//ɾ������ԭ���ڴ�
			size = rhs.size;//���ñ����������С
			list = new T[size];//���·���size��Ԫ�ص��ڴ�
		}
	}
	//�Ӷ���rhs��������Ԫ�ص�������
	for (int i = 0; i < size; i++) {
		list[i] = rhs.list[i];
	}
	return *this;//���ص�ǰ���������
}

//����[]�±��������ʵ������ͨ����һ��ͨ���±���ʣ�������Խ����Ĺ���
template<class T>
T& Array<T>:: operator[](int n)
{
	assert(n >= 0 && n < size);//����±�Խ��
	return list[n];//�����±�Ϊn������Ԫ��
}

//[]��������const������
template<class T>
const T& Array<T>::operator[](int n)const
{
	assert(n >= 0 && n < size);
	return list[n];
}

//����ָ��ת�����������Array��Ķ�����ת��ΪT���͵�ָ��
//ָ��ǰ�����˽������
//���������ʹ����ͨ�����׵�ַһ����ʹ��Array��Ķ�����
template <class T>
Array<T>::operator T* ()
{
	return list;//���ص�ǰ����˽��������׵�ַ
}

template<class T>
Array<T>::operator const T* ()const
{
	return list;
}

//ȡ��ǰ�����С
template<class T>
int Array<T>::getsize()const
{
	return size;
}

//������Ĵ�С��Ϊsz
template<class T>
void Array<T>::resize(int sz)
{
	assert(sz >= 0);
	if (size == sz) {
		return;
	}
	T* newList = new T[sz];
	int n = (sz > size) ? sz : size;
	for (int i = 0; i < n; i++) {
		newList[i] = list[i];
	}
	delete[] list;
	list = newList;
	size = sz;
}

int main()
{
	Array<int> a(10);
#if 1
	int count = 0;
	int n;
	cout << "Enter a value >=2 as upper limit for prime numbers:";
	cin >> n;
	for (int i = 2; i <= n; i++) {
		bool isPrimer = true;
		for (int j = 0; j < count; j++)
			if (i % a[j] == 0) {
				isPrimer = false;
				break;
			}
		if (isPrimer) {
			if (count == a.getsize())
				a.resize(count * 2);
			a[count++] = i;
		}
	}
	for (int i = 0; i < count; i++)
		cout << setw(8) << a[i];
#endif
}