#include <iostream>
using namespace std;
// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다.(은닉)
class Myclass {
	// 멤버변수: 속성
private:
	char id;
	int age;
	
	char name[10];
	// 멤버함수(=메소드):기능
public:
	void set(char aid, int aage, const char *aname)
	{
		id = aid;
		age = aage;
		strcpy_s(name, 10, aname);
	}
	void get()
	{
		cout << id << ' ' << age << ' ' << name << endl;
	}
};

int main()
{
	Myclass Juhyeon;
	Juhyeon.set('1' , 40, "박주현");
	Juhyeon.get();

	return 0;
}