#include<iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;		// public으로 static 멤버변수 선언
public:
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;	// static멤버변수는 항상 이렇게 초기화 된다!!

int main(void)
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;	
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

	return 0;
}