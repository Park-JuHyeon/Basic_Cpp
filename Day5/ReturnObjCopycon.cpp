#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n) {}
	SoSimple(const SoSimple& copy) :num(copy.num)	// copy에 obj가 들어간다
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)		// 참조형을 반환하는 AddNum
	{
		num += n;
		return *this;		// ob를 뜻함
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFunObj(SoSimple ob)
{
	cout << "return 이전" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFunObj(obj).AddNum(30).ShowData();
	obj.ShowData();

	return 0;
}