
#include <iostream>
using namespace std;

class Singleton {
private:
	Singleton() { } // 생성자를 private으로 숨김
public:
	// 복사 생성자와 복사 대입 연산자를 삭제(delete)하여 복사를 원천 봉쇄
	Singleton(const Singleton& extra) = delete;
	Singleton& operator=(const Singleton& extra) = delete;
	static Singleton& getInstance() {
		static Singleton instance;
		return instance;
	}
};

int main() {
	Singleton& s1 = Singleton::getInstance();
	Singleton& s2 = Singleton::getInstance();
	cout << "s1 주소: " << &s1 << endl;
	cout << "s2 주소: " << &s2 << endl;
	return 0;
}
