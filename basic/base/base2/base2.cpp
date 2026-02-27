#include<iostream>

int main() {

	int age;
	std::string name;

	std::cout << "나이와 이름을 입력하세요 : " << std::endl;
	std::cin >> age >> name;

	std::cout << "이름은 : " << name;
	std::cout << " 나이는 : " << age << std::endl;

	return 0;
}