#include <iostream>
#include<ctime>
using namespace std;


int main() {
	try {
		cout << "1" << endl;
		cout << "2" << endl;
		cout << "3" << endl;
		cout << "4" << endl;
		throw logic_error("강제 예외 발생"); // 6
		//throw 1;	// 7
		//throw "A";	// 8
		throw runtime_error("그 외 에러"); // 그 외의 에러
		cout << "5" << endl;
	}
	catch (const std::logic_error&) {
			cout << "6" << endl;
	}
	catch (int) {
		cout << "7" << endl;
	}
	catch (const char* e) {
		cout << "8" << endl;
	}
	catch (...) {
		cout << "그 외의 에러" << endl;
	}
	cout << "9" << endl;

	return 0;
}
