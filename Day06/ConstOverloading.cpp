#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "Const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

int main(void)
{
	SoSimple obj1(2);			// �Ϲݰ�ü ����
	const SoSimple obj2(7);		// const��ü ����

	obj1.SimpleFunc();			// �Ϲݰ�ü ��� SimpleFuncȣ���ϸ� 16�� �Ϲ� ����Լ�ȣ��
	obj2.SimpleFunc();			// const ��ü ������� SimpleFuncȣ���ϸ� 20���� const �Լ��� ȣ��

	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}