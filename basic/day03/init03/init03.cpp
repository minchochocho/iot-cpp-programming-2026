#include<iostream>
using namespace std;

class constSome {
public:
	const int value;
	constSome(int i) :value(i) { }

	void show() { printf("value : %d, value"); }
};

class refSome {
public:
	int& ri;
	refSome(int& i) :ri(i) { }

	void show() { printf("ri : %d\n", ri); }
};

int main() {
	constSome cs(10);
	cs.show();

	int i = 5;
	refSome rs(i);
	rs.show();


	return 0;
}