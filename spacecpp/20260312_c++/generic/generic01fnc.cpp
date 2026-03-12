//제네릭 함수 (Function Template)
#include <iostream>
#include <string>
using namespace std;

// T는 가상의 타입 이름입니다 (Template의 약자)
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapValues(x, y); // 컴파일러가 T를 int로 인식
    cout << "int swap: " << x << ", " << y << endl;

    string s1 = "Hello", s2 = "World";
    swapValues(s1, s2); // 컴파일러가 T를 string으로 인식
    cout << "string swap: " << s1 << ", " << s2 << endl;

    return 0;
}