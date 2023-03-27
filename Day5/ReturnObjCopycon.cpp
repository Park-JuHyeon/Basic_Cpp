#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n) {}
	SoSimple(const SoSimple& copy) :num(copy.num)	// copy�� obj�� ����
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)		// �������� ��ȯ�ϴ� AddNum
	{
		num += n;
		return *this;		// ob�� ����
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFunObj(SoSimple ob)
{
	cout << "return ����" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFunObj(obj).AddNum(30).ShowData();
	obj.ShowData();

	return 0;
}