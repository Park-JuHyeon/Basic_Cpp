#define _CRT_SECURE_NO_WARNINGS		// strcpy 사용위해 정의해야할 것!!
#include <iostream>
using namespace std;

class Human {
private:
	char name[20];
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage)	// setData()를 대신하는 형태
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
		cout << "이름 : " << name << "  "<< "학번: " << id <<"  "<< "나이: " << age << endl;

	}
	
};
int main(void)
{
	// Human h;
	// h.setData("홍길동", 2016842016, 27);
	
	Human h ("홍길동", 1, 30);

	h.getData();


	return 0;
}