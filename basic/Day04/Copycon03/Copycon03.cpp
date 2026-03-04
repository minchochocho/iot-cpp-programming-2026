/* 깊은 복사 */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	char* m_name;
	int m_age;
public:
	// 일반 생성자
	Person(const char* name, int age) {
		m_name = new char[strlen(name) + 1];	// name이라는 매개변수의 크기만큼 할당
		strcpy(m_name, name);					// '\0' 때문에 +1 해주기
		m_age = age;
	}
	// 복사 생성자
	Person(const Person &other) {
		m_name = new char[strlen(other.m_name)+1];
		strcpy(m_name, other.m_name);
		m_age = other.m_age;
		cout << "복사 생성자 호출 (깊은복사)\n";

	}
	// 대입 연산자
	Person& operator =(const Person& other) {
		// p1 = p1일 경우 예외 처리
		if (this == &other) return *this;
		// 들고 있던 메모리 해제
		delete[] m_name;
		// 깊은 복사
		m_name = new char[strlen(other.m_name) + 1];
		strcpy(m_name, other.m_name);
		m_age = other.m_age;
		// 연속 대입 (p3=p2=p1)을 위해 반환
		cout << "대입 연산자 호출\n";
		return *this;
	}
	// 소멸자
	~Person() {
		cout << m_name << " 소멸자 호출!\n";
		delete[] m_name;
	}
	// 출력
	void showPerson() {
		printf("이름 : %s, 나이 : %d\n", m_name, m_age);
	}
};

int main() {
	Person man1("홍길동", 100);
	man1.showPerson();

	Person man2("딩동", 300);
	man2 = man1;
	man2.showPerson();

}