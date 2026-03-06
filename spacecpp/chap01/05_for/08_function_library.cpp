#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

int main() {
	for (int i = 10; i >= 1; i--) {
		cout << i << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}

	for (int i = 10; i >= 1; i--) {
		cout << "\rCountdown : " << i << "  " << flush;
		this_thread::sleep_for(chrono::seconds(1));
	}

	cout << "Start!" << endl;
	return 0;
}
