#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
using namespace std;

class Product {
private:
	string name;
	int price;
public:
	Product(string n, int p) : name(n), price(p) { }
	Product() :name(" "), price(0) { }
	int getprice() const {
		return price;
	}
	string getname() {
		return name;
	}
};

class TV : public Product {
public:
	TV() : Product("TV", 300) { }

};

class Audio : public Product {
public:
	Audio() :Product("Audio", 400) { }
};

class Computer : public Product {
public:
	Computer() :Product("Computer", 300) { }

};

class Customer {
private:
	int money = 1000;

public:
	void Add_money() {
		system("cls");
		money += 1000;
		cout << "충전이 완료되었습니다." << endl;
		cout << "잔액은 " << money << "$ 입니다." << endl;
		cout << "----------------------------------------" << endl;
	}
	void buy(Product& d) {
		system("cls");
		int price = d.getprice();
		string name = d.getname();
		if (money >= price) {

			money -= price;
			cout << name << "을(를) 구매하셨습니다." << endl;
			cout << "잔액은 " << money << "$ 입니다." << endl;
		}
		else cout << "잔액이 부족합니다" << endl;
		cout << "----------------------------------------" << endl;
	}

};

int main() {
	Customer customer;
	TV tv;
	Computer com;
	Audio audio;
	int menu;

	do {
		cout << "제품목록 " << endl;
		cout << "1. TV" << endl;
		cout << "2. Computer" << endl;
		cout << "3. Audio" << endl;
		cout << "4. 종료" << endl;
		cout << "5. 충전" << endl;
		cout << "구매하실 제품을 선택해 주세요 : ";
		cin >> menu;
		cout << endl;
		switch (menu) {
		case 1:
			customer.buy(tv);
			break;
		case 2:
			customer.buy(com);
			break;
		case 3:
			customer.buy(audio);
			break;
		case 4:
			cout << "종료" << endl;
			break;
		case 5:
			customer.Add_money();
			break;
		default:
			system("cls");
			cout << "1 ~ 4 사이의 메뉴를 입력해주세요" << endl;
			cout << "----------------------------------------" << endl;
			break;
		}

	} while (menu != 4);

	return 0;
}