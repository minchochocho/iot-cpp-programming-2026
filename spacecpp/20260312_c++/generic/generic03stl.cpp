#include <iostream>
#include <vector>
#include <algorithm> // 제네릭 알고리즘 (sort 등)
using namespace std;

int main() {
    vector<int> numbers = { 5, 2, 9, 1 };

    // 어떤 타입의 컨테이너든 정렬할 수 있는 제네릭 함수 sort
    sort(numbers.begin(), numbers.end());

    for (int n : numbers) cout << n << " "; // 1 2 5 9 출력
    return 0;
}