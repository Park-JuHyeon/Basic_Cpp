#include <iostream>

int g = 0;
void func()
{
	printf("func() : %p\n", func);
}

int main(void)
{
	int n = 10;		// 지역변수
	static int c;
	const int d = 10;
	char ary[10] = "hi";

	func();
	printf("local n : %p\n", &n);
	printf("global g : %p\n", &g);
	printf("static c : %p\n", &c);
	printf("const d : %p\n", &d);
	printf("array : %p\n", ary);

	return 0;
}

/*
메모리 영역은 크게나누면
1. 코드세그먼트  (main함수, func함수, print함수)
2. 데이터 세그먼트 (스택, 힙영역)
*/