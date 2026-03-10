#include <iostream>
using namespace std;
int global;

int main() {
    static int sLocal;  // 정적 지역 변수
    int aLocal; // 자동 지역 변수 vs에서는 에러발생
    // 출력
    cout << "전역 변수 = " << global << endl;
    cout << "정적 지역 변수 = " << sLocal << endl;
    cout << "자동 지역 변수 = " << aLocal << endl;
}