#include <iostream>
using namespace std;

int main(void)
{
	int ary[5] = { 1,2,3,4,5 };		// int�� �ϳ��� 4byte �� �� 20byte
	printf("ary ��üũ�� : %d\n", sizeof(ary));
	int* pary = ary;	//ary�� �ּ��̱� ������ &�ʿ����

	printf("ary �ּ�: %p\n", ary);
	printf("ary[0] �ּ�: %p\n", &ary[0]);	// �迭�̸� �ּ� ary�ּҿ� ary[0]�� �ּҴ� �����ϴ�.
	printf("ary + 1: %p\n", ary + 1);	// �迭�� �ι�° ���� ����Ų�� = 1���濡�� + 4����Ʈ ������ ��
	printf("ary[1] �ּ�: %p\n", &ary[1]);

	printf("pary �ּ�: %p\n", &pary);
	printf("pary�� : %p\n", pary);
	printf("pary[0] �ּ�: %p\n", &pary[0]);	// ary[0]�� �ּҰ��� ������
	printf("pary[0] ��: %d\n", pary[0]);	// ary[0]�� ��(1)�� ������
	printf("pary[0] ��: %d\n", *pary);
	printf("pary[1] ��: %d\n", *(pary + 1));


	return 0;
}