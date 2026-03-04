// 이동 생성자(moveconstructor)
//  : 복사 생성자는 객체를 모두 복사해서 사용하고 이동 생성자는 원본 객체를 복사하지 않는다
//    std::move 호출은 h객체를 rvalue로 캐스팅하여 이동생성자에 전달된다
//		주소를 새 객체로 복사하고 기존 객체는 null로 처리한다(소유권 이전)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char name[30];
	int age;
public:
	Human(const char* name,int age) {
		cout << "** 일반 생성자 호출 **" << endl;
		strcpy(this->name, name);
		this->age = age;
	}

	Human(const Human& other) {
		cout << "** 복사 생성자 호출 **" << endl;
		strcpy(name, other.name);
		age = other.age;
	}
	Human(Human&& other) noexcept {			// noexcept 예외를 방출하지 않을 함수로 선언한다.
		cout << "** 이동생성자 호출 **" << endl;
		strcpy(this -> name, name);
		this->age = age;

		//other.name = nullptr;		// 배열은 실제복사가 이루어진다.
		other.age = 0;				// other 객체가 더 이상 유효한 데이터를 가지지 않도록 보장한다.
	}

	~Human() {

	}
	void showHuman() {
		cout << "이름 : " << name << ", 나이 : " << age << endl;
	}

};

int main()
{

	Human h("홍길동",100);		// 일반 생성자 호출
	h.showHuman();

	Human cph(h);				// 복사 생성자 호출
	cph.showHuman();

	Human cph2(move(h));				// 이동 생성자 호출
	cph2.showHuman();

	return 0;

}