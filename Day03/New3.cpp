/*	�޸� �����Ҵ� c++Ÿ��	*/

#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;
	cout << "�迭�� ������ �Է��Ͻÿ� s: ";
	cin >> size;
	arr = new int[size];

	for(int i=0;i<size;i++)
	{
		cout << i + 1 << "��° ���� s: ";
		cin >> arr[i];

	}
	delete[] arr;

	return 0;
}