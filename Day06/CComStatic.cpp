#include <iostream>
using namespace std;

void static_Counter()
{
	static int cnt;
	cnt++;
	cout << "Current static_cnt: " << cnt << endl;
}

void Counter()
{
	int cnt = 0;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
		static_Counter();
	}
	
	return 0;
}