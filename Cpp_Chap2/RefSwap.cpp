#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);		//위의 함수 정의로 인해 val1이 20, val2가 10이 출력됨
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}