#include<set>
#include<vector>
#include <iostream>
using namespace std;

int main() {
	// 중복된 원소를 허용하지 않고, 자동으로 정렬되는 자료구조
	// C++에서는 정렬, Java에서는 정렬 XX
	set<int> s;

	s.insert(10);
	s.insert(10);
	s.insert(20);

	// 중복허용을 하지 않으므로 총 2개만 들어감
	for (int x : s)
		cout << x << endl;

	// 값 찾기
	if (s.find(10) != s.end()) {
		cout << "10이 존재합니다." << endl;
	}

	if (s.find(30) == s.end()) {
		cout << "30이 존재하지 않습니다." << endl;
	}


	set<int, greater<int>> s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);

	for (int x : s2)
		cout << x << endl;

	// 벡터에서 set으로 변환
	vector<int> v = { 3,1,2,2,5 };

	set<int> s3(v.begin(), v.end());

}