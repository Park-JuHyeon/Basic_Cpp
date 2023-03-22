#include <iostream>

// 1번째
/*
int main(void)
{
	int n1 = 10;
	int n2 = 20;

	printf("n1: %d \t n2: %d\n", n1, n2);

	n1 = 20;
	n2 = 10;

	printf("n1: %d \t n2: %d\n", n1, n2);
	return 0;
}
*/

// 2번째 함수로 구현
/*
void swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1: %d \t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("호출 전 n1: %d \t n2: %d\n", n1, n2);
	swap(n1, n2);		// 스왑이 되어 20 10 출력
	printf("호출 후 n1: %d \t n2: %d\n", n1, n2);  // 스왑함수와 일반 출력은 관계없음!

	return 0;
}
*/
// 3번째 포인터로 구현 : Call by reference

void swap(int* pn1, int* pn2)
{
	int temp = *pn1;
	*pn1 = *pn2;
	*pn2 = temp;
	// printf("n1: %d \t n2: %d\n", pn1, pn2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("호출 전 n1: %d \t n2: %d\n", n1, n2);
	swap(&n1, &n2);		// 스왑이 되어 20 10 출력
	printf("호출 후 n1: %d \t n2: %d\n", n1, n2);  // 스왑함수와 일반 출력은 관계없음!

	return 0;
}



