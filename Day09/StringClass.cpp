#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
	int len;
	char* str;
public:
	String();					// 디폴트 생성자 선언
	String(const char* s);		// 문자열을 받는 생성자
	String(const String& s);	// 복사생성자
	~String();					// 소멸자
	String& operator=(const String& s);
	String& operator+= (const String& s);
	bool operator==(const String& s);
	String operator+ (const String& s);

	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is, String& s);
};

String::String()	// 생성자 = 문자열을 입력 받을 목적
{
	len = 0;
	str = NULL;
}

String::String(const char* s)
{
	len = strlen(s) + 1;		// +1의 의미: Null문자를 집어넣기위해 포인터값에 +1을 해준다
	str = new char[len];		// 동적할당
	strcpy(str, s);
}

String::String(const String& s)	// 복사생성자
{
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
}

String::~String()	//  소멸자정의
{
	if (str != NULL)
		delete[]str;
}

String& String::operator= (const String& s)
{
	if (str != NULL)
		delete[]str;
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator+=(const String& s)
{
	len += (s.len - 1);			// -1의미: 문자열 두개를 더해버리면 널문자를 2개를 더하게 되는데 이중 하나를 지우기위해
	char* tempstr = new char[len];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	if (str != NULL)
		delete[]str;
	str = tempstr;
	return *this;
}

bool String::operator==(const String& s)
{
	return strcmp(str, s.str) ? false : true;	// strcmp(compare) : 문자 두개 참 거짓 비교
}

String String::operator+ (const String& s)
{
	char* tempstr = new char[len + s.len - 1];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	String temp(tempstr);
	delete[]tempstr;
	return temp;
}

ostream& operator<<(ostream& os, const String& s)	// 출력연산자
{
	os << s.str;
	return os;
}

istream& operator>>(istream& is, String& s)			// 입력연산자
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}

int main(void)
{
	String str1 = "I like ";
	String str2 = "string class";
	String str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3)
		cout << "동일 문자열!" << endl;
	else
		cout << "동일하지 않은 문자열!" << endl;

	String str4;
	cout << "문자열 입력: ";
	cin >> str4;
	cout << "입력한 문자열: " << str4 << endl;

	return 0;
}














