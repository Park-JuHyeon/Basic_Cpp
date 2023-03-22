#include <iostream>

int main(void)
{
	char ch[5] = "hong";	// 배열 선언 문자열 따라서 마지막에
	ch[0] = 'h';		// 문자 하나식 저장
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a';

		for (int i = 0; i < 5; i++)
		{
			printf("%c\n", ch[i]);

		}

	// printf("char 크기 : %d \n", sizeof(char));
	//printf("ch[4] = $c\n", ch[4]);
	// printf("cha[4] : %s\n", ch[4]);

	// ch[0] = 'w';
	printf("배열이름 ch: %p\n", ch);
	printf("배열주소 ch: %p\n", &ch);


	return 0;
}