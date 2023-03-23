#include<iostream>
using namespace std;

namespace Car_CONST
{
	enum		// #define 대신 enum으로 값 정의
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car		// 구조체를 통해 함수를 보기쉽고 기능파악이 쉽게 만든다.
{
	char gamerID[Car_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState();		// 상태정보출력
	void Accel();				// 엑셀, 속도증가
	void Break();				// 브레이크, 속도감소
};

void Car::ShowCarState()		
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
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