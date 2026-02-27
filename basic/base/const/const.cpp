// const

#include <iostream>
using namespace std;

int main() {
	//int num1 = 10;

	//num1 = 20;
	//cout << num1 << endl;
	
	//const int num2 = 10;
	//cout << num2 << endl;

	int num2=20;

	const int* p1=&num2;
	
	cout << *p1 << endl;
	cout << num2 << endl;

	// *p1 = 10; << 값을 바꿀수 XX
	int num3 = 22;
	p1 = &num3;	// 주소 변경은 가능
	// 데이터를 상수화 시킨다는 뜻

	int* const p2 = &num2;
	*p2 = num3;


	return 0;
}