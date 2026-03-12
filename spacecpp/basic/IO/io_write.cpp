#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");

    if (outFile.is_open()) {
        outFile << "C++ 파일 제어 학습 중입니다.\n";
        outFile << "두 번째 줄도 저장해 봅니다.\n";
        outFile.close(); // 작업 종료 후 반드시 닫기
        cout << "파일 저장 완료! ✨" << endl;
    }
    else {
        cerr << "파일을 열 수 없습니다." << endl;
    }
    return 0;
}

