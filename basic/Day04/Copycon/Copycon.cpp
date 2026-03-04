#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
    char m_name[20];
    int age;

public:
    Person(const char* name, int age) {
        printf("생성자 호출\n");
        strcpy(m_name, name);
        this->age=age;
    }
    void viewPerson() {
        printf("name : %s, age : %d\n", m_name, age);
    }
};

int main() {
    Person p("홍길동",100);
    p.viewPerson();

    Person p1=p;        // 객체를 복사해서 생성한다.(복사 생성자)
    p1.viewPerson();

    Person p2(p);
    p2.viewPerson();
}
