/*메모리 동적 할당*/

#include<iostream>
// #include<stdio.h>
using namespace std;

int main()
{
	int* arr;
	int size;

	printf("배열방의 갯수: ");
	scanf_s("%d", &size);		//scanf로 입력을 받을때는 주소연산자가 필요하다.

	arr = (int*)malloc(sizeof(int));	// arr에 4바이트 크기의 시작주소를 할당, heap영역에 할당

//	arr = malloc(sizeof(int));
	printf("만들어진 배열 크기: %d\n", sizeof(int) * size);	// if size값에 5를 넣으면 4*5=20의 값이 출력
	printf("%d\n", sizeof(int));	// int size는 4

	free(arr);		// 메모리 해제

	return 0;
}