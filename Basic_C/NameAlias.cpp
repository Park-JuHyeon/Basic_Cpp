#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;		// 별칭 선언 이전에 변수 num1에 접근하는것
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;	//AAA::BBB::CCC에 별칭 ABC를 부여해주는 것
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}