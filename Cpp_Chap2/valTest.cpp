#include <iostream>

int main()
{
	/*
	int num = 10;		// �ʱ�ȭ
	int num1;			// ���� ����
	num1 = 20;			// �� ����
	num = 30;
	printf("int�� ũ��: %d\n", sizeof(int));	// 4byte

	char ch;			// ����Ÿ��
	printf("char�� ũ��: %d\n", sizeof(char));	// 1����Ʈ

	double d = 3.14;
	printf("double�� ũ�� %d\n", sizeof(double));	// 8byte
	*/

	char ch = 0x7f;		// 16���� ���(0~9, a~f)

	unsigned char ch1 = 0x7f;	// 0~

	printf("ch�� ��: %x \t ch: %d\n", ch, ch);
	printf("ch1: %x \t ch: %d\n\n", ch1, ch1);

	char ch2 = 0x9f;			// �Ϲ� -128~127���� �ε� 
	unsigned char uch2 = 0x9f;	// ����� ����Ҷ� unsigned	, 0b 1001 1111 << 1 : 0b 1 0011 1110

	printf("ch2�� ��: %x \t ch: %d\n", ch2, ch2);	// 9f�� 159�� 127�� �Ѿ�Ե� -> �׷��� 2������ 1001 1111�� �ٲ�� �ǰ� -97�� ����
	printf("uch2�� ��: %x \t ch: %d\n\n", uch2, uch2);

	uch2 = uch2 << 1;		// <<�� ��Ʈ������ : uch2�� �������� 1��Ʈ��ŭ �̵���Ų��.
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