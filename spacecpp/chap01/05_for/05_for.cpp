#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip> // 출력을 깔끔하게 맞추기 위해 사용
using namespace std;

int main() {
	/*
	for (int i = 2; i < 10; i++) {
		cout << "구구단 " << i << "단" << endl;
		cout << "------------" << endl;
		for (int j = 1; j < 10; j++) {
			cout << i << " X " << j << " = " << i * j<<endl;
		}
		puts("");
	}


    // 2-4
    /*
    for (int j = 1; j <= 9; j++) {
        for (int i = 2; i <= 4; i++) {
            cout << i << " X " << j << " = " <<  i * j << "\t";
        }
        cout << endl;
    }

    // 5-7
    for (int j = 1; j <= 9; j++) {
        for (int i = 5; i <= 7; i++) {
            cout << i << " X " << j << " = " <<  i * j << "\t";
        }
        cout << endl;
    }

    // 8-9
    for (int j = 1; j <= 9; j++) {
        for (int i = 8; i <= 9; i++) {
            cout << i << " X " << j << " = " <<  i * j << "\t";
        }
        cout << endl;
    }

    for (int i = 1; i <= 9; i++) {

        for (int j = 2; j <= 9; j++) {
            cout << j << " X " << i << " = " << i * j << "\t";
        }
        cout << endl;
    }
    */


    for (int i = 2; i < 10; i+=3) {         // 2, 5, 8 순서로 변함 << 줄 시작 위치
        for (int j = 1; j < 10; j++) {      // 1 ~ 9 
            for (int k = 0; k < 3; k++) {   // 0 ~ 2 이니깐 3개씩 234, 567, 89이런식으로 오게 만드는 것
                if (i + k != 10) {          // 이건 9단까지라 그이상이 안되게 막는거고
                    cout << (i + k) << "*" << j << "=" << setw(2) << setfill(' ') << j * (i + k) << "\t";
                }   // i + k << {0 = 2단, 1 = 2단, 2 = 3단} 이런느낌 근데 이제 3까지만 반복이니깐 3개씩 출력되겠지
            }
            cout << endl;   // 여기서 끝마무리를 내줘야 3줄씩 끊길 수 있는거고
        }   
        cout << "\n";       // 그 후에 여기서 한줄을 내려 줌으로써 한줄 내리고 5부터 시작하겠지
    }


}