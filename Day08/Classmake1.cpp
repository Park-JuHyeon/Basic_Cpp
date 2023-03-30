#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char name[30];
	int birthday;
public:
	Person(const char* aname, int birth) 
	{
		strcpy(name,aname);
		birthday = birth;
	}
	void showPerson()
	{
		cout << "이름 = " << name << endl;
		cout << "생일 = " << birthday << endl;
	}
};

int main(void)
{
	Person p1("Park", 19970725);
	p1.showPerson();

	Person p2(p1);
	p1.showPerson();

	Person p3 = p2;
	p3.showPerson();

	return 0;
}