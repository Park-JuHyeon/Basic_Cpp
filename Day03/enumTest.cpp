#include<iostream>

enum week
{
	sun ,
	mon = 1,
	tue,
	wed
};

int main()
{
	printf("%d\n", sun);
	printf("%d\n", tue);
	printf("%d\n", wed);

	return 0;
}