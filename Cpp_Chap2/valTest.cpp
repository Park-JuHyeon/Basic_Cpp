#include <iostream>

int main()
{
	/*
	int num = 10;		// 초기화
	int num1;			// 변수 선언
	num1 = 20;			// 값 대입
	num = 30;
	printf("int의 크기: %d\n", sizeof(int));	// 4byte

	char ch;			// 문자타입
	printf("char의 크기: %d\n", sizeof(char));	// 1바이트

	double d = 3.14;
	printf("double의 크기 %d\n", sizeof(double));	// 8byte
	*/

	char ch = 0x7f;		// 16진법 사용(0~9, a~f)

	unsigned char ch1 = 0x7f;	// 0~

	printf("ch의 값: %x \t ch: %d\n", ch, ch);
	printf("ch1: %x \t ch: %d\n\n", ch1, ch1);

	char ch2 = 0x9f;			// 일반 -128~127까지 인데 
	unsigned char uch2 = 0x9f;	// 양수만 취급할때 unsigned	, 0b 1001 1111 << 1 : 0b 1 0011 1110

	printf("ch2의 값: %x \t ch: %d\n", ch2, ch2);	// 9f가 159라서 127을 넘어가게됨 -> 그래서 2진수로 1001 1111로 바뀌게 되고 -97이 나옴
	printf("uch2의 값: %x \t ch: %d\n\n", uch2, uch2);

	uch2 = uch2 << 1;		// <<는 비트연산자 : uch2를 왼쪽으로 1비트만큼 이동시킨다.
	ch2 = ch2 << 1;
	printf("uch2 : %x \t uch2 : %d\n", uch2, uch2);
	printf("ch2 : %x \t ch2 : %d\n\n", ch2, ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1 : %x \t uch2 >> 1 : %d\n", uch2, uch2);
	printf("ch2 >> 1 : %x \t ch2 >> 1 : %d\n", ch2, ch2);



	return 0;
}