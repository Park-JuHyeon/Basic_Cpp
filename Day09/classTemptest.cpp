#include <iostream>
using namespace std;

template <typename T>	// 클래스 템플릿 일반화
class CTest
{
private:
	T data;
public:
	CTest(T adata = 0) :data(adata)
	{}
	T getData()
	{
		return data;
	}
};

template <>			// 클래스 템플릿 특수화
class CTest<char>
{
private:
	char data;
public:
	CTest(const char adata) :data(adata)
	{}
	char getData()
	{
		return data;
	}
};

int main()
{
	CTest<int> a(10);
	cout << a.getData() << endl;

	CTest<char> b('a');
	cout << b.getData() << endl;

	return 0;
}