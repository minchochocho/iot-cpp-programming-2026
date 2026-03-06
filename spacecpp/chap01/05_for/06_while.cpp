// 내마음의 숫자를 맞춰봐
// 1. 난수 생성(1~100)
// 2. 숫자 인풋
// 3. 난수와 인풋을 비교
// 4-1. 정답일 경우 빠져나옴
// 4-2. 큰지 작은지 말해주고 2번으로 돌아감

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	srand(time(0));
	//cout << showpoint << rand() % 100 + 1 << endl;
	int rnum = rand() % 100 + 1;
	//cout << rnum << endl;
	int num;
	int count=0;
	
	do {
		cout << "1~100사이의 숫자를 입력해주세요: ";
		cin >> num;
		count++;
		if (rnum == num) break;
		else if (rnum > num) {
			cout << "더 큰 숫자입니다\n";
		}
		else cout << "더 작은 숫자입니다\n";
	} while (rnum != num);

	cout << "축하드립니다!" << count<< "번 만에 맞추셨습니다";

	return 0;
}