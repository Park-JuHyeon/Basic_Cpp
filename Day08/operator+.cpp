#include <iostream>
using namespace std;

// Myclass Ŭ���� ����
class Myclass
{
private:
	int num1, num2;  // ��� ���� ����
	const char* name; // const char* ������ ��� ���� ����
public:
	// ������ ���� (num1, num2, name ��� ���� �ʱ�ȭ)
	Myclass(int n1 = 0, int n2 = 0, const char* aname = nullptr) : num1(n1), num2(n2), name(aname)
	{}
	// ��� ���� ���� ����ϴ� �Լ�
	void showData()
	{
		cout << num1 << ", " << num2 << ", " << name << endl;
	}
};

int main(void)
{
	Myclass std(10, 20, "Park");  // ��ü ����, ������ ȣ��
	std.showData();               // ��� ���� �� ���
	Myclass std1(std);            // ��ü ����, ���� ������ ȣ��
	std1.showData();              // ����� ��� ���� �� ���

	Myclass std2;                 // ��ü ����, �⺻ ������ ȣ��
	std2 = std1;                  // ��ü ����, ���� ������ ȣ��
	std2.showData();              // ����� ��� ���� �� ���

	return 0;
}