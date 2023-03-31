#include <iostream>
using namespace std;

template <typename T>	// Ŭ���� ���ø� �Ϲ�ȭ
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

template <>			// Ŭ���� ���ø� Ư��ȭ
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