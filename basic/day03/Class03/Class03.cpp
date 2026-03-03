// C++ 클래스
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Human {
public:
	char name[30];
	int age;
	char job[30];

	void show_data() {
		printf("이름 : %s, 나이 : %d, 직업 : %s\n", name, age, job);
	}
};

int main() {
	// 구조체 변수 선언
	// Human h = {"Hong",30,"학생"};	// 객체를 생성하는 문법X, 쓸수는 있음
	Human h("hong",30,"학생");			// 객체 생성 문법
	// 생성자 호출 문법

	h.show_data();

	return 0;
}
