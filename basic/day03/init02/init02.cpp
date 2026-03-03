#include<iostream>
using namespace std;

class Time {
private:
	int m_hour;	// 여기서 `m`은 필드를 뜻함
	int m_min;
	int m_sec;
public:
	Time() {
		cout << "기본 생성자 호출!!" << endl;
	}
	// 콜론 초기화
	Time(int h, int m, int s) :m_hour(h), m_min(m), m_sec(s) {
		cout << "3개의 입력값을 받는 생성자 호출!!" << endl;
	}

	void setTime(int h, int m, int s){
		m_hour = h;
		m_min = m;
		m_sec = s;
	}
	void showTime() {
		printf("현재 시간은 %d:%d:%d 입니다.\n", m_hour, m_min, m_sec);
	}
};

int main() {
	Time now;
	now.setTime(16,53,10);
	now.showTime();

	Time t1(16, 57, 33);
	t1.showTime();
	return 0;
}
