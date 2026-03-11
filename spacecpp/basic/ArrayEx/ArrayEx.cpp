#include <iostream>
using namespace std;

int main() {
	// 배열의 선언
	int arr[5];	// 정수형 배열 arr을 선언, 크기는 5

	// 배열의 초기화
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	int arr2[5] = { 1,2,3,4,5 };	// 선언과 동시에 초기화
	int arr3[] = { 6,7,8,9,10 };	// 배열 크기를 생략하고 초기화

	// 배열의 길이
	cout << "arr의 길이: " << sizeof(arr) / sizeof(arr[0]) << endl;
	// c++ 17 이후로는 std::size(arr)로 배열의 길이를 구할 수 있다
	cout << "arr2의 길이: " << size(arr2) << endl;

	// 배열 요소에 접근
	for (int i = 0; i < 5; i++) {
		cout << "arr3[" << i << "]: " << arr3[i] << endl;	// 6,7,8,9,10
	}
	cout << endl;
	for (int i = size(arr2) - 1; i >= 0; i--) {
		cout << "arr3[" << i << "]: " << arr3[i] << endl;
	}

	bool arrBool[] = { true, -1, true, 0 };	// 불리언 배열
	string arrStr[] = { "Hello","World","C++" }; //문자열 배열
	char arrChar[] = { 'A','B','C','D', 48 };

	return 0;
}