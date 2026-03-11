#include <iostream>
using namespace std;

int main() {
	try {
		int x;
		cout << "Enter a number (1 ~ 3) : ";
		cin >> x;
		if (x == 1) {
			throw "1";
		}
		else if (x == 2) {
			throw 2.5;
		}
		else if (x == 2) {
			throw 2.5;
		}
		else if (x == 3) {
			throw 3;
		}
	}
	catch (int e) {
		cout << "catch int: " << e << endl;
	}
	catch (double d) {
		cout << "catch double: " << d << endl;
	}
	catch (const char* s) {
		cout << "catch const char*: " << s << endl;
	}
	return 0;
}
