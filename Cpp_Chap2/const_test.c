#include <stdio.h>	// C소스의 헤더파일

int main(void)
{
//	int num = 10;
//	printf("num : %d\n", num);

//	num = 20;
//	printf("num : %d\n", num);

	/*
	const int num = 10;		//  num값을 상수화 = 바꿀수없음
	printf("num = %d\n", num);
	// num = 20;
	int* p = &num;		// 주소를 저장할 수 있는 포인터변수(그냥 기호), &(주소연산자) == num의 주소값을 p에 저장
	printf("p에 저장된 값: %p\n", p);
	printf("p가 참조하는 값: %d\n", *p);
	*p = 100;		// *는 완전참조 연산자
	printf("P가 가리키는 곳의 데이터값: %d\n", *p);
	printf("num : %d\n", num);
	*/

	const int num = 10;
	// num = 100; 불가능
	
	printf("num = %d\n", num);

	int* p = &num;
	*p = 100;
	printf("num = %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;		// 데이터의 상수화
	printf("pa = %p\n", pa);
	pa = &num2;
	printf("변경 후 pa = %p\n", pa);

	// *pa = 50;   안됨

	int* const pb = &num1;		// 포인터 변수의 상수화
	// pb = &num2;
	*pb = 70;

	return 0;
}


