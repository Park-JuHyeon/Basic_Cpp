#include <iostream>
using namespace std;

class Myclass
{
private:
	int num1,num2;
	const char* name;
public:
	Myclass(int n1 = 0, int n2 = 0, const char* aname = nullptr) : num1(n1), num2(n2), name(aname)
	{}
	void showData()
	{
		cout << num1 << ", " << num2 << ", " << name << endl;
	}

};

int main(void)
{
	Myclass std(10, 20, "Park");
	std.showData();
	Myclass std1(std);		// std1 = std
	std1.showData();

	Myclass std2;
	std2 = std1;
	std2.showData();

	return 0;
}