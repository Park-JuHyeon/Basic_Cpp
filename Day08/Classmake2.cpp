#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;


class Person
{
private:
	char* name;
	int birthday;
public:
	Person(const char* aname, int birth): birthday(birth)	// ������
	{
		name = new char[strlen(aname) + 1];			// �޸� �����Ҵ�
		strcpy(name, aname);
	}
	Person(const Person& copy) : birthday(copy.birthday)	// ��������� ����.
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	void showPerson() const
	{
		cout << "�̸� " << name << endl;
		cout << "���� " << birthday << endl;
	}

	Person& operator = (const Person ref)	// ������ �����ε�
	{
		name = new char[strlen(ref.name) + 1];
		strcpy(name, ref.name);
		birthday = ref.birthday;
		return *this;
	}
	
	~Person()		// �Ҹ��� ����
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

/*
void SimpleFuncObj(Person ob)
{
	ob.showPerson();
}
*/

int main(void)
{
	Person p1("ȫ�浿", 19990909);
	p1.showPerson();
	
	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	Person p4("������", 20001201);
	p4.showPerson();

	p4 = p1;
	p4.showPerson();
	//SimpleFuncObj(p4);
	
	return 0;
}