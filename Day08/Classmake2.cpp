#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)

class Person
{
private:
	char* name;
	int birthday;
public:
	Person(const char* aname, int birth): birthday(birth)	// 생성자
	{
		name = new char[strlen(aname) + 1];			// 메모리 동적할당
		strcpy(name, aname);
	}
	Person(const Person& copy) : birthday(copy.birthday)	// 복사생성자 정의.
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	void showPerson() const
	{
		cout << "이름 " << name << endl;
		cout << "생일 " << birthday << endl;
	}

	Person& operator = (const Person ref)
	{
		this->name = new char[strlen(ref.name) + 1];
		strcpy(this->name, ref.name);
		this->birthday = ref.birthday;
		return *this;
	}
	
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

void SimpleFuncObj(Person ob)
{
	ob.showPerson();
}

int main(void)
{
	Person p1("홍길동", 19990909);
	p1.showPerson();
	
	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	Person p4("강감찬", 20001201);
	p4.showPerson();

	p4 = p1;
	p4.showPerson();
	//SimpleFuncObj(p4);
	
	return 0;
}