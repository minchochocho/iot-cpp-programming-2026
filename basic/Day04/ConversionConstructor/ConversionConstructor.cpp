#include<iostream>
using namespace std;

class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time(int abssec=0) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	~Time();
	void outTime() {
		printf("입력한 시간은 %d시 %d분 %d초 입니다\n", hour, min, sec);
	}
};

int main() {
	Time now(4372);
	now.outTime();

	Time t;
	t.outTime();


	return 0;
}