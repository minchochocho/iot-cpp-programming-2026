#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#include<set>

using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(NULL)));

	set<int> luckyBox;

	while (luckyBox.size() < 6) {
		int num = rand() % 45 + 1;
		luckyBox.insert(num);
	}

	for (int num : luckyBox ) {
		cout<< "[" << num << "] " ;
	}

	return 0;
}

class Car {
private:
	Engine seta;
};

class Engine {
	
};
