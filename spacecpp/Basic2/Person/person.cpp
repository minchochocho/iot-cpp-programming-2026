#include"person.h"

// 대입을 통해 초기화
//Person::Person() {
//	identity = 0;
//}

// 멤버 초기화 리스트를 이용하는 방법
Person::Person() :identity(0) { }

Person::Person(long identity)
:identity(identity) {
	// assert : 실행 중 특정 조건이 반드시 참이어야 한다는 것을 검사하는 디버깅용 매크로 함수
	// 거짓이면 프로그램을 중단(abort)한다
	assert(identity >= 100000000 && identity<=999999999);
}

Person::~Person() { }

Person::Person(const Person& other) 
	:identity(other.identity){
}

void Person::print() const {
	cout << "Identity: " << identity << endl;
}
