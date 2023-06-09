#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy) : age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	void showPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Person()
	{
		delete []name;
		cout << "cold destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.showPersonInfo();
	man2.showPersonInfo();

	return 0;
}