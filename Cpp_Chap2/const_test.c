#include <stdio.h>	// C�ҽ��� �������

int main(void)
{
//	int num = 10;
//	printf("num : %d\n", num);

//	num = 20;
//	printf("num : %d\n", num);

	/*
	const int num = 10;		//  num���� ���ȭ = �ٲܼ�����
	printf("num = %d\n", num);
	// num = 20;
	int* p = &num;		// �ּҸ� ������ �� �ִ� �����ͺ���(�׳� ��ȣ), &(�ּҿ�����) == num�� �ּҰ��� p�� ����
	printf("p�� ����� ��: %p\n", p);
	printf("p�� �����ϴ� ��: %d\n", *p);
	*p = 100;		// *�� �������� ������
	printf("P�� ����Ű�� ���� �����Ͱ�: %d\n", *p);
	printf("num : %d\n", num);
	*/

	const int num = 10;
	// num = 100; �Ұ���
	
	printf("num = %d\n", num);

	int* p = &num;
	*p = 100;
	printf("num = %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;		// �������� ���ȭ
	printf("pa = %p\n", pa);
	pa = &num2;
	printf("���� �� pa = %p\n", pa);

	// *pa = 50;   �ȵ�

	int* const pb = &num1;		// ������ ������ ���ȭ
	// pb = &num2;
	*pb = 70;

	return 0;
}


