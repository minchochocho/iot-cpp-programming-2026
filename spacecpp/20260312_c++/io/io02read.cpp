#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("example.txt");
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) { // 파일 끝까지 한 줄씩 읽기
            cout << "읽어온 내용: " << line << endl;
        }
        inFile.close();
    }
    else {
        cout << "파일을 찾을 수 없습니다." << endl;
    }
    return 0;
}