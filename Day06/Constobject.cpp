#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const	
	{
		cout << "num : " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);	// const객체 생성
	// obj.AddNum(20);		// AddNum은 const함수가 아니어서 호출이 불가능하다.
	obj.ShowData();			// showData는 const함수여서 호출이 가능하다.

	return 0;
}