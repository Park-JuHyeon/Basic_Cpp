#define _CRT_SECURE_NO_WARNINGS		// strcpy ������� �����ؾ��� ��!!
#include <iostream>
using namespace std;

class Human {
private:
	char name[20];
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage)	// setData()�� ����ϴ� ����
	{
		strcpy(name, aname);
		id = aid;
		age = aage;
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
		cout << "�̸� : " << name << "  "<< "�й�: " << id <<"  "<< "����: " << age << endl;

	}
	
};
int main(void)
{
	// Human h;
	// h.setData("ȫ�浿", 2016842016, 27);
	
	Human h ("ȫ�浿", 1, 30);

	h.getData();


	return 0;
}