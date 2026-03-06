#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main() {

	// 생년월을 입력받아서 봄 여름 가을 겨울을 구분

	int month = 0;

	cout << "태어난 월을 입력해 주세요 : ";

	cin >> month;

	switch (month) {
	case 3:		case 4:		case 5:
		cout << "봄" << endl;
		break;
	case 6:		case 7:		case 8:
		cout << "여름" << endl;
		break;
	case 9:		case 10:	case 11:
		cout << "가을" << endl;
		break;
	case 12:	case 1:		case 2:
		cout << "겨울" << endl;
		break;
	default:
		printf("잘못 입력 하셨습니다.");
		break;
	}


	int season = (month % 12) / 3;
	string str[20] = { "겨울", "봄", "여름", "가을" };
	cout << str[season];

	if (season == 0)cout << "겨울"; 
	else if (season == 1)cout << "봄"; 
	else if (season == 2)cout << "여름"; 
	else cout << "가을"; 

	return 0;
}