#include<iostream>
using namespace std;

class Myclass
{
private:
	char id;
	int age;

	char name[10];

public:
	Myclass(char aid, int aage, const char* aname);		// 생성자 원형
	
	void getData();
	
};

Myclass::Myclass(char aid, int aage, const char* aname)		// 생성자 정의
{
	printf("생성자 호출 \n");
	id = aid;
	age = aage;
	strcpy_s(name, 10, aname);
}

void Myclass::getData()
{
	cout << id << ' ' << age << ' ' << name << endl;
}

int main(void)
{
	Myclass Juhyeon('1', 27, "박주현");
	//Myclass mysc = Juhyeon();
	Juhyeon.getData();

	return 0;
}

/*
Myclass Juhyeon()
{
	Myclass sc('1', 27, "박주현");
	return sc;
}
*/