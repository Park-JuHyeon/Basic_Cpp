#include<iostream>
using namespace std;

#define ID_LEN 20
#define Max_SPD 200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN];	// ������ ID
	int fuelGauge;			// ���ᷮ
	int curSpeed;			// ����ӵ�
};

void ShowCarState(const Car& car)		//���� ���� ����Լ�
{
	cout << "������ID: " << car.gamerID << endl;
	cout << "���ᷮ: " << car.fuelGauge << "%" << endl;
	cout << "����ӵ�: " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car& car)		// ������ ���� ��Ȳ�� ǥ���� �Լ� = ������ ���������� ���ᰨ��,���ǵ� �ö�
{
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= Max_SPD)
	{
		car.curSpeed = Max_SPD;
		return;
	}
	car.curSpeed += ACC_STEP;
}

void Break(Car& car)	//�극��ũ ��� ��Ȳ => �ӵ� ����
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99",100,0 };	// ����ü ������ ���� �� �ʱ�ȭ
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);

	return 0;
}