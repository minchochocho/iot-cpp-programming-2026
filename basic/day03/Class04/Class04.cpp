// C++ 매개 변수, 함수
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
using namespace std;

class Human {
private:
	char name[20];
	int age;
	char job[20];
public:
	// 생성자
	Human(const char* aname,int aage,const char* ajob) {	// 반환값이 없다, 생성자 이름 = 클래스 이름
		strcpy(name, aname);
		age = aage;
		strcpy(job, ajob);
	}

	void show() {
		cout << "이름 : " << name << ", 나이 : " << age << ", 직업 : " << job;
	}
};

int main() {
	//Human h("hong", 30, "student");
	Human h("hong",30,"student");
	h.show();

	return 0;
}
