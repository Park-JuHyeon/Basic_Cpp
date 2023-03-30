#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	const char* name[30];
	int birthday;
public:
	Person(const char* aname, int birth) 
	{
		name = new char[strlen(aname) + 1];
	}
	void showPerson() const
	{
		cout << "�̸� " << name << endl;
		cout << "���� " << birthday << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
	
};

int main(void)
{
	Person p1("ȫ�浿", 19990909);
	p1.showPerson();
	
	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	Person p4;
	p4 = p1;

	return 0;
}