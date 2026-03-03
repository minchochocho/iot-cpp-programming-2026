// 오후 시작
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

typedef struct {
	char name[30];
	int age;
	char job[30];
}Human;

void show_data(Human ah) {
	printf("이름 : %s, 나이 : %d, 직업 : %s\n", ah.name, ah.age, ah.job);
}

int main() {
	Human h = {
		"Hong",30,"학생"
	};
	show_data(h);

	return 0;
}

// C는 출력기능을 가지고 있는 함수를 별도로 만들어야 함