#include<iostream>
#include<map>
using namespace std;

int main() {
	// map은 키-값 쌍으로 데이터를 저장하는 연관 컨테이너 입니다.
	map<string, int>m;

	m["apple"] = 100;
	m["banan"] = 200;
	m["orange"] = 300;

	//iterator를 이용한 순회(전통적인 방법) 잘안씀
	for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it) {
		cout << it->first << " : " << it->second << endl;
	}

	//auto iterator(C++11 이후)
	for (auto it = m.begin(); it != m.end(); ++it) {
		cout << it->first << " : " << it->second << endl;
	}

	// range-based for(가장 많이 사용)
	for (auto& p : m) {
		cout << p.first << " : " << p.second << endl;
	}

	// 구조 분해 방식 (C++17)
	for (auto& [key, value] : m) {
		cout << key << " : " << value << endl;
	}

	// 값 찾기
	if (m.find("apple") != m.end())
		cout << "존재" << endl;

	// 값 삭제
	m.erase("banana");

	// 키 존재 여부 확인
	if (m.count("banana") == 0) {
		cout << "존재하지 않음";
	}

	// value 존재 여부 확인(map은 키로 검색하므로, value로 검색하려면 순회
	bool valueExists = false;
		for (const auto& p : m) {
			if (p.second == 300) {
				valueExists = true;
				break;
			}
		}

	// 키-값 쌍 추가
	m.insert({ "grape",400 });

	// 맵 초기화
	map<string, int> m2 = {
		{"kim",90},
		{"lee",85},
		{"park",95}
	};

	// 성적관리 예제
	map<string, int> score;

	score["kim"] = 90;
	score["lee"] = 85;	
	score["park"] = 95;

	for (auto s: score) {
		cout << s.first << " : " << s.second << endl;
	}

	return 0;
}