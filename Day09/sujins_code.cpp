#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996)

class Person {
private:
    char* name;
    int birthday;
public:
    Person(const char* name, int birthday)
    {
        int len = (int)strlen(name) + 1;
        this->name = new char[len];
        strcpy(this->name, name);
        this->birthday = birthday;
    }
    Person(const Person& copy)
    {
        this->name = new char[strlen(copy.name) + 1];
        strcpy(this->name, copy.name);
        this->birthday = copy.birthday;
    }
    Person& operator=(const Person& ref)
    {
        delete[] name;
        this->name = new char[strlen(ref.name) + 1];
        strcpy(this->name, ref.name);
        this->birthday = ref.birthday;
        return *this;
    }
    void ShowPerson() const {
        cout << this->name << endl;
        cout << this->birthday << endl;
    }

    ~Person() {
        delete[] this->name;
        cout << "delete name" << endl;
    }

};

int main()
{
    Person p1("이수진", 19991130);
    p1.ShowPerson();

    Person p2(p1);
    p2.ShowPerson();

    Person p3 = p2;
    p3.ShowPerson();

    Person p4("이규수", 19970917); // 대입 연산자 오버로딩
    p4 = p1;
    p4.ShowPerson();

    return 0;
}