#include <iostream>
using namespace std;
// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�.(����)
class Myclass {
	// �������: �Ӽ�
private:
	char id;
	int age;
	
	char name[10];
	// ����Լ�(=�޼ҵ�):���
public:
	void set(char aid, int aage, const char *aname)
	{
		id = aid;
		age = aage;
		strcpy_s(name, 10, aname);
	}
	void get()
	{
		cout << id << ' ' << age << ' ' << name << endl;
	}
};

int main()
{
	Myclass Juhyeon;
	Juhyeon.set('1' , 40, "������");
	Juhyeon.get();

	return 0;
}