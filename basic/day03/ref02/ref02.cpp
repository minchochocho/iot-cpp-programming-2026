// ref02.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행#include <iostream>
#include <iostream>
using namespace std;

void chanbge_val(int &n) {
}

int main()
{
	int num = 10;
	int& ref = num;
	int* pnum = &num;

	num++;
	ref++;
	(*pnum)++;

	cout << "num: " << num << endl;
	cout << "ref: " << ref << endl;
	cout << "*pnum" << *pnum << endl;

	cout << "&num" << &num << endl;
	cout << "&ref" << &ref << endl;

}
