#include<iostream>
using namespace std;

class Myclass		// Ŭ���� �̸��� ù���ڴ� �빮�ڷ��Ѵ�
{
private:			// �ܺ��� ������ �����Ѵ�(95%)
	int private_val;
public:				// �ܺ����� ����
	int public_val;
protected:			// ��ӿ����� ���ٰ���
	int protected_val;
public:				// ����Լ��� ������!! public(100%)
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
	o.public_val = 100;		// �ܺο����� ������ public�� ����
	//o.protected_val;
	o.set(200);

	o.get();
	return 0;
}