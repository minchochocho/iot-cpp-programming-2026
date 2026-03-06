#include<iostream>
using namespace std;

// 전역변수 선언 기본값으로 초기화
bool sw;	// 0
char c1;	// 0, 자바에서는 공백으로 초기화된다 ' '
long l1;	// 0
float f1;	// 0.0
double d1;	// 0.0

int main() {
	// 지역변수, 반드시 할당이 되어야 한다.(선언 + 초기화)
	bool b1 = -1;
	char first = 'A';
	char second = 48;	// 형변환, 0 = 48, a = 97, A = 65

	cout << "b1 : "<< boolalpha << b1 << endl;	// boolalpha : 불형태로 보여줌
	cout << "first : " << first << endl;
	cout << "second : " << second << endl;	// 0 출력, ASCII코드 48 = '0'

	cout << sizeof(int) << endl;

	cout << "sw : " << sw << endl;
	cout << "c1 : " << c1 << endl;
	cout << "l1 : " << l1 << endl;
	cout << "f1 : " << showpoint << f1 << endl;
	cout << "d1 : " << showpoint << f1 << endl;

	return 0;
}