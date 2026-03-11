#include <iostream>
#include<ctime>
using namespace std;

int divide(int a, int b) {
	if (b == 0) {
		throw "Division by zero is not allowed.";
	}
	return a / b;
}

int main() {
	srand(static_cast<unsigned int>(time(0)));

	while (true) {
		int num1 = rand() % 10;
		int num2 = rand() % 10;
		try {
			cout << "Attempting to divide " << num1 << " by " << num2 << "..." << endl;
			int result = divide(num1, num2);
			cout << "Result: " << result << endl;
		}
		catch(const char* e){
			cout << "Error: " << e << endl;
			break;
		}
	}
	return 0;
}