/* 사용자 정의 자료형인 구조체 : C type */
#include<iostream>

struct human
{
	char name[20];
	int age;
};

int main()
{
	// char h;
	struct human h { "홍길동", 23 };		// 구조체human 타입의 구조체변수 h 선언		

	printf("이름은 %s \n 나이는 %d 입니다.\n", h.name, h.age);

	return 0;
}