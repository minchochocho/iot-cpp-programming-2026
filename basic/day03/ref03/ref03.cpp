/* 상수참조자 레퍼런스 */
#include<iostream>

int main() {
	//int& ref = 4;
	//const int& ref = 4;	// 상수 레퍼런스로 선언하면 리터럴도 참조 가능
	int&& ref = 4;	// 이것도 가능


	return 0;
}