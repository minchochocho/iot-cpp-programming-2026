#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main() {
	char name[20] = "홍길동";
	char cp_name[20];

	strcpy(name, "김영희");
	strcpy(cp_name, name);

	cout << "name : " << name << endl;
	cout << "cp_name : " << cp_name << endl;

	char name2[20];

	cout << "이름을 입력하세요 : " ;
	cin >> name2;

	cout << "당신의 이름은 " << name2 << "입니다" << endl;

	return 0;
}