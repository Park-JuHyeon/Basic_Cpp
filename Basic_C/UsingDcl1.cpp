#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "�ʹ� ���� �Լ��ΰ�?" << std::endl;
		std::cout << "�̸��� ���̺긮���!" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;	//Hybrid ���ӽ����̽��� HybFunc�� ����ϰڴ�.
	HybFunc();
	return 0;
}