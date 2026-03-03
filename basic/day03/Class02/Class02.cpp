// C++ 구조체
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

typedef struct HumanTag{
	char name[30];
	int age;
	char job[30];

	void show_data() {
		printf("이름 : %s, 나이 : %d, 직업 : %s\n", name, age, job);
	}
}Human;

int main() {
	Human h = {
		"Hong",30,"학생"
	};
	h.show_data();

	return 0;
}
