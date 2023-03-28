#include<cassert>
#include<iostream>
#include<iomanip>
using namespace std;

//数组类模版定义
template<class T>
class Array
{
private:
	T* list;//T类型指针，用于存放动态分配的数组内存首地址
	int size;//数组大小（元素个数）
public:
	Array(int size = 50);//构造函数
	Array(const Array<T>& a);//复制构造函数
	~Array();//析构函数

	Array<T>& operator=(const Array<T>& rhs);//重载 = ,使对象可以整体赋值

	T& operator[](int i);//重载“[]”，使得Array对象可以起到c++普通数组的作用
	const T& operator[](int i) const;//"[]"针对const的重载

	operator T* ();//T * 是指向T的指针 //重载到T*类型的转换，使得Array对象可以起到c++普通数组的作用
	operator const T* ()const;//到T*类型的转换针对const的重载

	int getsize()const;//取数组的大小
	void resize(int size);//修改数组的大小
};

//构造函数 
template<class T>
Array<T>::Array(int sz)
{
	assert(sz >= 0);
	size = sz;
	list = new T[size];
}

//析构函数 
template<class T>
Array<T>::~Array()
{
	delete[] list;
}

//复制构造函数
template<class T>
Array<T>::Array(const Array<T>& a)
{
	//从对象a获取数组大小
	size = a.size;
	//为对象申请内存并进行出错检查
	list = new T[size];//动态分配size个T类型的元素空间
	//从对象a复制数组元素到本对象
	for (int i = 0; i < size; i++) {
		list[i] = a.list[i];
	}
}

//重载“=”运算符，将对象rhs赋值给本对象，实现对象上的整体赋值
template<class T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
	//当前对象的地址不同于引用来的对象rhs
	if (&rhs != this) {
		//如果本对象的内存大小与rhs不同，则删除数组原有内存并重新分配内存
		if (size != rhs.size) {
			delete[] list;//删除数组原有内存
			size = rhs.size;//设置本对象数组大小
			list = new T[size];//重新分配size个元素的内存
		}
	}
	//从对象rhs复制数组元素到本对象
	for (int i = 0; i < size; i++) {
		list[i] = rhs.list[i];
	}
	return *this;//返回当前对象的引用
}

//重载[]下标运算符，实现与普通数组一样通过下标访问，并且有越界检查的功能
template<class T>
T& Array<T>:: operator[](int n)
{
	assert(n >= 0 && n < size);//检查下标越界
	return list[n];//返回下标为n的数组元素
}

//[]运算符针对const的重载
template<class T>
const T& Array<T>::operator[](int n)const
{
	assert(n >= 0 && n < size);
	return list[n];
}

//重载指针转换运算符，将Array类的对象名转换为T类型的指针
//指向当前对象的私有数组
//因而可以像使用普通数组首地址一样的使用Array类的对象名
template <class T>
Array<T>::operator T* ()
{
	return list;//返回当前对象私有数组的首地址
}

template<class T>
Array<T>::operator const T* ()const
{
	return list;
}

//取当前数组大小
template<class T>
int Array<T>::getsize()const
{
	return size;
}

//将数组的大小改为sz
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