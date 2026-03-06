#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main() {
	int num;
	int sum = 0;
	cout << "숫자를 입력하세요(종료는 0)" << endl;
	while (1) {
		cout << "입력 : ";
		cin >> num;
		if (num == 0) {
			break;
		}if (num < 0) {
			cout << "음수는 계산하지 않습니다." << endl;
			continue;
		}
		sum += num;

	}
	cout << "Total : " << sum << endl;	

	return 0;
}