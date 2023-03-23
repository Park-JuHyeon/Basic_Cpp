#include<iostream>
using namespace std;

#define ID_LEN 20
#define Max_SPD 200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN];	// 소유자 ID
	int fuelGauge;			// 연료량
	int curSpeed;			// 현재속도
};

void ShowCarState(const Car& car)		//차의 정보 출력함수
{
	cout << "소유자ID: " << car.gamerID << endl;
	cout << "연료량: " << car.fuelGauge << "%" << endl;
	cout << "현재속도: " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car& car)		// 엑셀을 밟은 상황을 표현한 함수 = 엑셀을 밟을때마다 연료감소,스피드 올라감
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

void Break(Car& car)	//브레이크 밟는 상황 => 속도 감소
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
	Car run99 = { "run99",100,0 };	// 구조체 변수의 선언 및 초기화
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