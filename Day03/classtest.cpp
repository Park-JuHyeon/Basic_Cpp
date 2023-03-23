#include<iostream>
using namespace std;

class Myclass		// 클래스 이름의 첫글자는 대문자로한다
{
private:			// 외부의 접근을 불허한다(95%)
	int private_val;
public:				// 외부접근 가능
	int public_val;
protected:			// 상속에서만 접근가능
	int protected_val;
public:				// 멤버함수는 무조건!! public(100%)
	void set(int an) {
		private_val = an;
	}
	void get() {	
		cout << "public_val: "<< public_val << endl;
		cout << "private_val: "<< private_val << endl;
	}
};

int main()
{
	Myclass o;
	//o.private_val;
	o.public_val = 100;		// 외부에서의 접근은 public만 가능
	//o.protected_val;
	o.set(200);

	o.get();
	return 0;
}