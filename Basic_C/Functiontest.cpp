#include <iostream>

/*
int main(void)
{
	int a = 10;
	int b = 20;
	int res;

	res = a + b;

	std::cout << "res: "<< res << std::endl;

	return 0;
}
*/

/*
void MyFunc(void)    // ��� �Լ�(�Է�) �� ����		void�� ��� �ִٴ� �� => ��, ��� ��� �������
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;

}

int main()
{
	MyFunc();
	return 0;
}
*/

/*
// �Է��� ����� ��� : (�Ű�) ������ ����
void MyFunc(int a, int b)	//  �Է��� �ְ� ����� ���� �Լ� , ����� ���� = void
{
	int res = a + b;
	std::cout << "res : " << res << std::endl;
}

int main()
{
	int a1 = 10;
	int b1 = 20;
	MyFunc(a1, b1);		// �Է����� �������ִ� ���� ���μ�(a1, b1)
	return 0;
}
*/

int Myfunc(int a, int b);  // �Լ� ����


int main()
{
	int a1 = 10;
	int b1 = 20;

	int res = MyFunc(a1, b1);	// ���ϵǴ� ���� �����ؼ� ����Ѵ� (�Լ� ȣ��)

	std::cout << "res : " << res << std::endl;
	std::cout << "res : " << MyFunc(a1, b1) << std::endl;

}

int MyFunc(int a, int b)   // �Էµ��ְ� ��µ� �ִ� �Լ� (�Լ� ����)
{
	int res = a + b;
	// std::cout << "res : " << res << std::endl;
	return res;		// ����� return������ �ۼ��Ѵ�.
}


