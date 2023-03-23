#include<iostream>
using namespace std;

namespace Car_CONST
{
	enum		// #define ��� enum���� �� ����
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car		// ����ü�� ���� �Լ��� ���⽱�� ����ľ��� ���� �����.
{
	char gamerID[Car_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState();		// �����������
	void Accel();				// ����, �ӵ�����
	void Break();				// �극��ũ, �ӵ�����
};

void Car::ShowCarState()		
{
	cout << "������ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= Car_CONST::FUEL_STEP;

	if ((curSpeed + Car_CONST::ACC_STEP) >= Car_CONST::MAX_SPD)
	{
		curSpeed = Car_CONST::MAX_SPD;
		return;
	}

	curSpeed += Car_CONST::ACC_STEP;
}
void Car::Break()
{
	if (curSpeed < Car_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	
	curSpeed -= Car_CONST::BRK_STEP;

}

int main(void)
{
	Car run99 = { "park", 100, 0 };
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}