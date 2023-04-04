#include <iostream>
using namespace std;

// Myclass 클래스 정의
class Myclass
{
private:
	int num1, num2;  // 멤버 변수 선언
	const char* name; // const char* 형태의 멤버 변수 선언
public:
	// 생성자 정의 (num1, num2, name 멤버 변수 초기화)
	Myclass(int n1 = 0, int n2 = 0, const char* aname = nullptr) : num1(n1), num2(n2), name(aname)
	{}
	// 멤버 변수 값을 출력하는 함수
	void showData()
	{
		cout << num1 << ", " << num2 << ", " << name << endl;
	}
};

int main(void)
{
	Myclass std(10, 20, "Park");  // 객체 생성, 생성자 호출
	std.showData();               // 멤버 변수 값 출력
	Myclass std1(std);            // 객체 복사, 복사 생성자 호출
	std1.showData();              // 복사된 멤버 변수 값 출력

	Myclass std2;                 // 객체 생성, 기본 생성자 호출
	std2 = std1;                  // 객체 대입, 대입 연산자 호출
	std2.showData();              // 복사된 멤버 변수 값 출력

	return 0;
}