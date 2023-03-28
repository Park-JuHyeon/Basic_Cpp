#include<iostream>
using namespace std;

class CountryArea	// const static 상수는 하나의 클래스에 둘이상 모이는것이 보통이다.
{
public:
	const static int RuSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main(void)
{
	cout << "러시아 면적: " << CountryArea::RuSSIA << "㎢" << endl;
	cout << "캐나다 면적: " << CountryArea::CANADA << "㎢" << endl;
	cout << "중국 면적: " << CountryArea::CHINA << "㎢" << endl;
	cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "㎢" << endl;

	return 0;
}