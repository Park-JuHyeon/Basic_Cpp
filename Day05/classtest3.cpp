#define _CRT_SECURE_NO_WARNINGS		// strcpy ������� �����ؾ��� ��!!
#include <iostream>
using namespace std;

class Human {
private:
	char *name;
	int id;
	int age;
public:
	Human(const char *aname, int aid, int aage)	// �迭 ��� ���������·� ����
	{
		new char[strlen(aname) + 1];		// aname�� ���ڿ��� ���̸� �޾ƿ´�
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human() {			// �Ҹ��� ������ �տ� ~�� �ٿ��ָ� �ȴ�.
		delete[] name;		// �Ҹ��� �Լ� delete�� ����ؼ� �Ҹ��Ŵ.
	}

	/*
	void setData(const char aname[20],int aid, int aage )
	{
		// name = aname;
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData()
	{
		cout << "�̸� : " << name << "  " << "�й�: " << id << "  " << "����: " << age << endl;

	}

};
int main(void)
{
	// Human h;
	// h.setData("ȫ�浿", 2016842016, 27);

	Human h("ȫ�浿", 1, 30);

	h.getData();

	Human hary[3] = { Human("�迵��", 2, 23), Human("��ö��", 3, 23), Human("������", 4, 45) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}