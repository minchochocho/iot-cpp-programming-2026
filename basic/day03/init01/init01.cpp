#include<iostream>
using namespace std;

int main() {
	int num = 10;		// 복사생성자 호출
	int num1(100);		// 직접 초기화

	int num2 { 200 };	// 중괄호 직접 초기화
	int num3 = { 300 };

	return 0;

}