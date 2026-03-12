#include<list>
#include<iostream>
using namespace std;

int main() {
	list<int> l;	// linkedList

	// 선형구조 중간에 삽입과 삭제가 빈번히 일어나는 경우, 배열보다 효율적

	l.push_back(10);
	l.push_back(5);

	for (int x: l) {
		cout << x << endl;
	}
}

