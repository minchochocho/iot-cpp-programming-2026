#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;

    m["apple"] = 100;
    m["banana"] = 200;
    m["orange"] = 300;

    //iterator를 이용한 순회 (전통적인 방법)
    for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }
    //auto iterator (C++11 이후)
    for (auto it = m.begin(); it != m.end(); ++it) { //
        cout << it->first << " : " << it->second << endl;
    }
    //range-based for (가장 많이 사용)
    for (auto& p : m) { //range-based for (가장 많이 사용)
        cout << p.first << " : " << p.second << endl;
    }
    //구조 분해 방식 (C++17) 
    for (auto& [key, value] : m) {
        cout << key << " : " << value << endl;
    }

    //**std::map** 은 내부적으로 정렬된 상태로 저장
    //순회 결과
    //apple
    //banana
    //orange

}