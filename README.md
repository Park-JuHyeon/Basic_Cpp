# Basic_Cpp

## Day01
  - 함수 오버로딩(OverLoading)
  - 함수 정의
```python
#include <iostream>


int main(void)
{
	int a = 10;
	int b = 20;
	int res;

	res = a + b;

	std::cout << "res: "<< res << std::endl;

	return 0;
}

void MyFunc(void)    // 출력 함수(입력) 의 형태		void는 비어 있다는 뜻 => 입, 출력 모두 비어있음
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

// 입력을 만드는 방법 : (매개) 변수를 선언
void MyFunc(int a, int b)	//  입력이 있고 출력은 없는 함수 , 출력이 없다 = void
{
	int res = a + b;
	std::cout << "res : " << res << std::endl;
}

int main()
{
	int a1 = 10;
	int b1 = 20;
	MyFunc(a1, b1);		// 입력으로 전달해주는 놈을 실인수(a1, b1)
	return 0;
}

int Myfunc(int a, int b);  // 함수 선언

int main()
{
	int a1 = 10;
	int b1 = 20;

	int res = MyFunc(a1, b1);	// 리턴되는 값을 저장해서 사용한다 (함수 호출)

	std::cout << "res : " << res << std::endl;
	std::cout << "res : " << MyFunc(a1, b1) << std::endl;

}

int MyFunc(int a, int b)   // 입력도있고 출력도 있는 함수 (함수 정의)
{
	int res = a + b;
	// std::cout << "res : " << res << std::endl;
	return res;		// 출력은 return문으로 작성한다.
}

```
  
  
  - 매개변수의 디폴트 값
  - 인라인(inline) 함수
  
  
## Day02
   - True , False 구분하는 자료형 bool
   - 참조자(Reference)
   	- Call-by-value & Call-by-reference
