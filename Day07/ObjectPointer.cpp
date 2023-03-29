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
{	// �θ������Ͱ� �ڽ������͸� ����Ű�� ����! �ڽ��� �Ұ���!!
	Person* ptr1 = new student();		// �Ǿ��� Person Ÿ�Կ� ���� sleep�ۿ� ����� �ȵȴ�.
	Person* ptr2 = new PartTimeStudent();	
	student* ptr3 = new PartTimeStudent();	// Person ����� �޴� student Ÿ�Կ� ���� sleep, study �Լ� �ΰ��� ȣ�Ⱑ��

	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();
	ptr3->Sleep();

	// ���� �����θ� ����Ű�� ���� �����ϴ�
	PartTimeStudent* ptr = new PartTimeStudent();	// Parttimestudent�� person student �ΰ��� ����� �����Ƿ� ����Լ� ���� ����
	ptr->Sleep();
	ptr->Study();
	ptr->Work();

	delete ptr1; delete ptr2; delete ptr3;

	return 0;
}