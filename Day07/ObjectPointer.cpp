#include<iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{	// 부모포인터가 자식포인터를 가리키는 것임! 자식은 불가능!!
	Person* ptr1 = new student();		// 맨앞의 Person 타입에 따라 sleep밖에 출력이 안된다.
	Person* ptr2 = new PartTimeStudent();	
	student* ptr3 = new PartTimeStudent();	// Person 상속을 받는 student 타입에 따라 sleep, study 함수 두개가 호출가능

	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();
	ptr3->Sleep();

	// 본인 스스로를 가리키는 것은 가능하다
	PartTimeStudent* ptr = new PartTimeStudent();	// Parttimestudent는 person student 두개의 상속을 받으므로 모든함수 접근 가능
	ptr->Sleep();
	ptr->Study();
	ptr->Work();

	delete ptr1; delete ptr2; delete ptr3;

	return 0;
}