#include<iostream>
using namespace std;	// std::를 생략 가능하게 해줌
// using std::cout;	// 개별로도 가능
static int sum;
namespace A {
	void printAll() {
		cout << "A" << endl;
		sum = 10;
	}
}

namespace B {
	void printAll() {
		cout << "B" << endl;
	}
}

int main() {

	A::printAll();
	B::printAll();
	unsigned int us = -2121;
	
	cout << us << endl;

	double x = 23.56;
	int y = 30;
	cout << "암묵적 자료형 변환 활용" << x + y << endl;
	cout << "명시적 자료형 변환 활용" << static_cast<int>(x) + y << endl;
	cout << "명시적 자료형 변환 활용" << (int)(x)+y << endl;	// 자바는 이렇게 쓴다

	double num1 = +numeric_limits<double>::max();
	double num2 = -numeric_limits<double>::max();
	cout << "부동소수점의 오버플로우: " << num1 * 1000 << endl;
	cout << "부동소수점의 오버플로우: " << num2 * 1000 << endl;
	cout << "sum " << sum << endl;

	return 0;
}