#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
	char m_name[20];
	int m_age;

public:
	Person(const char* name,int age) {		// constructor
		puts("constructor");
		strcpy(m_name, name);
		m_age = age;
	}
	Person(const Person &other) {	// copy constructor - 객체를 복사하여 초기화 하므로 복사 생성자 호출
		puts("copy constructor");	// 입력이나 출력이 객체 일대는 복사 생성자가 호출된다.
									// 복사생성자 인수는 상수 레퍼런스를 사용한다.
		strcpy(m_name, other.m_name);
		m_age = other.m_age;
	}
	~Person() {	// `~`(틸트) : 소멸자
		puts("나는 소멸자 입니다.");
	}
	void showPerson() {
		printf("name : %s, age : %d\n", m_name, m_age);

	}

};

int main() {
	Person m("홍길동", 100);
	m.showPerson();

	Person copym(m);        // 객체를 복사해서 생성한다.(복사 생성자)
	copym.showPerson();

	Person copym1=m;
	copym1.showPerson();

	//Person m2 = &m;	// 이런걸 만들수는 있는데 객체지향과는 맞지 않아서 안씀
	return 0;
}

/*
	기본 생성자, 기본복사생성자, 소멸자는 디폴트로 제공된다.
*/