#include<iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;
public:
	SoBase() :baseNum(20)
	{
		cout << "SoBase(int n)" << endl;
	}
	SoBase(int n) :baseNum(n)
	{
		cout << "SoBase()" << endl;
	}
	void ShowBaseData()
	{
		cout << baseNum << endl;
	}
};

class SoDerived :public SoBase
{
private:
	int derivNum;
public:
	SoDerived() :derivNum(30)
	{
		cout << "SoDerived()" << endl;
	}
	SoDerived(int n) :derivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}
	SoDerived(int n1, int n2) :SoBase(n1), derivNum(n2)
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}
	void ShowDerivData()
	{
		ShowBaseData();
		cout << derivNum << endl;
	}
};

int main(void)
{
	cout << "case1......" << endl;
	SoDerived dr1;
	dr1.ShowDerivData();	// ShowBaseData�� baseNum: 20, SoDerived�� derivNum �ʱⰪ 30�� ���
	cout << "------------------------" << endl;
	cout << "case2......" << endl;
	SoDerived dr2(12);
	dr2.ShowDerivData();	// ShowBaseData�� baseNum: 20, SoDerived�� int n���� 12�� ��
	cout << "------------------------" << endl;
	cout << "case3......" << endl;
	SoDerived dr3(23, 24);	// baseNum : 23, derivNum: 24
	dr3.ShowDerivData();

	return 0;
}