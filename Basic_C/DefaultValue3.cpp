#include <iostream>

int BoxVolume(int length, int width = 1, int height = 1);   // 함수 선언

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;  // 3 x 3x 3 = 27
	std::cout << "[5,5,D] : " << BoxVolume(5,5) << std::endl;		// 5x5 = 25
	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;			// 7x디폴트 = 7
	// std::cout << "[D,D,D] : " << BoxVolume() << std::endl;   // 모든 매개변수에 디폴트 값이 지정된것이 아니라서 에러가 난다.
	return 0;
}

int BoxVolume(int length, int width, int height)    // 함수 정의
{
	return length * width * height;
}