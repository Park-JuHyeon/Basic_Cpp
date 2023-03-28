#define _CRT_SECURE_NO_WARNINGS		// strcpy 사용위해 정의해야할 것!!
#include <iostream>
using namespace std;

class Human {
private:
	char *name;
	int id;
	int age;
public:
	Human(const char *aname, int aid, int aage)	// 배열 대신 포인터형태로 가능
	{
		new char[strlen(aname) + 1];		// aname의 문자열의 길이를 받아온다
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human() {			// 소멸자 생성자 앞에 ~를 붙여주면 된다.
		delete[] name;		// 소멸자 함수 delete를 사용해서 소멸시킴.
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
		cout << "이름 : " << name << "  " << "학번: " << id << "  " << "나이: " << age << endl;

	}

};
int main(void)
{
	// Human h;
	// h.setData("홍길동", 2016842016, 27);

	Human h("홍길동", 1, 30);

	h.getData();

	Human hary[3] = { Human("김영의", 2, 23), Human("김철수", 3, 23), Human("김찰스", 4, 45) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}