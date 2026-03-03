#include<iostream>
using namespace std;

int funt(int n) {
	n++;
	return n;
}

int& funt1(int r) {		// 리턴타입이 레퍼런스이다(출력이 레퍼런스)
	r++;
	return r;
}

int main() {
	int num = 10;

	int ret = funt(num);

	cout << ret << endl;

	int ret = funt1(num);	// 복사해서 사용
	cout << ret << endl;
	int& ref = funt1(num);	// 참조해서 사용

	return 0;
}