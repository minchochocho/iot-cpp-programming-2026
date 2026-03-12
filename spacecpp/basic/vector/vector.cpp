#include <iostream>
#include <vector>
#include<chrono>
#include<random>
using namespace std;

int main() {
	vector<int> v;
	vector<int> v1 = { 1,2,3,4,5 };
	vector<int> v2(5);  // 0,0,0,0,0
	vector<int> v3(5, 10);

	// 데이터 끝에서 추가
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.pop_back();   // 데이터 끝에서 제거
	v.erase(v.begin() + 1); // 데이터 중간에서 제거

	// 일반 for문
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	// range 기반 for문
	for (int x : v) {
		cout << x << endl;
	}

	// v2 shuffle
	// 난수 생성 엔진과 시드 설정(현재 시간 사용)
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	default_random_engine engine(seed);
	shuffle(v1.begin(), v1.end(), engine);

	for (int n : v1) {
		cout << n << " ";
	}
	cout << endl;

	// v2 sort
	sort(v1.begin(), v1.end());
	for (int n : v1) {
		cout << n << " ";
	}
	cout << endl;

	// v2 reverse
	reverse(v1.begin(), v1.end());
	for (int n : v1) {
		cout << n << endl;
	}
	cout << endl;

	vector<int> v5;
	for (int i = 0; i < 10; i++) {
		v5.push_back(rand() % 100 + 1); // 1~100사이의 난수 집어넣기
		cout << v5[i] << endl;
	}
	cout << endl;

	// 2차원 벡터
	vector<vector<int>> arr = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	// 객체 자체는 힙영역에 저장된다

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
