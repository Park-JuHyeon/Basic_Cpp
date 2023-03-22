#include <iostream>
using namespace std;

int main(void)
{
	int ary[5] = { 1,2,3,4,5 };		// int방 하나는 4byte 즉 총 20byte
	printf("ary 전체크기 : %d\n", sizeof(ary));
	int* pary = ary;	//ary가 주소이기 때문에 &필요없음

	printf("ary 주소: %p\n", ary);
	printf("ary[0] 주소: %p\n", &ary[0]);	// 배열이름 주소 ary주소와 ary[0]의 주소는 동일하다.
	printf("ary + 1: %p\n", ary + 1);	// 배열의 두번째 방을 가리킨다 = 1번방에서 + 4바이트 증가된 값
	printf("ary[1] 주소: %p\n", &ary[1]);

	printf("pary 주소: %p\n", &pary);
	printf("pary값 : %p\n", pary);
	printf("pary[0] 주소: %p\n", &pary[0]);	// ary[0]의 주소값과 동일함
	printf("pary[0] 값: %d\n", pary[0]);	// ary[0]의 값(1)과 동일함
	printf("pary[0] 값: %d\n", *pary);
	printf("pary[1] 값: %d\n", *(pary + 1));


	return 0;
}