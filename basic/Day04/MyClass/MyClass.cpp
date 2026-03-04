// MyClass.cpp 
// 일반,복사,이동
// 
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyClass {
private:
	int id;		// 학번
	char* name;	// 이름

public:
	MyClass(int id=0, const char* name= "") {
		cout << "일반 생성자 호출" << endl;
		this->id = id;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}

	MyClass(const MyClass& other) {
		cout << "복사 생성자 호출" << endl;
		this->id = other.id;
		name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);

	}

	MyClass(MyClass&& other) noexcept : id(other.id), name(other.name) {
		cout << "이동 생성자 호출" << endl;

		other.name = nullptr;	// 메모리가 터지지 않게 끊어주기
		other.id = 0;
	}

	void show() {
		cout << "학번 : " << id << ", 이름 : " << name << endl;
	}
};


int main() {
	MyClass cl;
	cl.show();

	MyClass cl1(2212, "김");
	cl1.show();

	MyClass cl2(cl1);
	cl2.show();

	MyClass cl3(move(cl1));
	cl2.show();
	cl1.show();

	return 0;
}