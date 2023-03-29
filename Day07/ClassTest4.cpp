#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
private:
	char name[20];
	int age;
public:
	
	Person(const char* aname, int aage);
	/*{
		strcpy(name, aname);
		age = aage;
	}*/
	void getData();
	/*{
		cout << "My name is " << name << endl;
		cout << "My age is " << age << endl;
	}*/
};

Person::Person(const char* aname, int aage)
{
	strcpy(name, aname);
	age = aage;
}

void Person::getData()
{
	cout << "My name is " << name << endl;
	cout << "My age is " << age << endl;
}

class student : public Person
{
private:
	int studentID;
public:
	student(const char* , int, int ) ;
	
	void showData(); 
	
};

student::student(const char* aname, int aage, int myID) : Person(aname, aage)
{
	studentID = myID;
}

void student::showData()
{
	getData();
	cout << "My ID is " << studentID << endl << endl;
}

int main(void)
{
	student std1("Park", 25, 1234);
	std1.showData();

	return 0;
}