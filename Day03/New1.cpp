/*�޸� ���� �Ҵ�*/

#include<iostream>
// #include<stdio.h>
using namespace std;

int main()
{
	int* arr;
	int size;

	printf("�迭���� ����: ");
	scanf_s("%d", &size);		//scanf�� �Է��� �������� �ּҿ����ڰ� �ʿ��ϴ�.

	arr = (int*)malloc(sizeof(int));	// arr�� 4����Ʈ ũ���� �����ּҸ� �Ҵ�, heap������ �Ҵ�

//	arr = malloc(sizeof(int));
	printf("������� �迭 ũ��: %d\n", sizeof(int) * size);	// if size���� 5�� ������ 4*5=20�� ���� ���
	printf("%d\n", sizeof(int));	// int size�� 4

	free(arr);		// �޸� ����

	return 0;
}