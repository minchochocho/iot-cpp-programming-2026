#include<stdio.h>

int a;
int global_c = 100;

int func() {	// 함수 이름도 주소다
	return 1;
}

int main() {

	int b;
	static int c;			// 지역변수면서 전역변수의 특성을 띔
	const int d=10;			// 상수도 지역변수가 만들어지는 메모리 영역인 스택영역에 만들어 진다
	char arr[20]="hi";
	char* parr = "hong";	// static과 동일한 메모리 영역에 저장

	printf("func : %p\n", func);
	printf("glabal a : %p\n",&a);
	printf("Local b : %p\n",&b);
	printf("global c : %p\n",&global_c);
	printf("static c : %p\n",&c);
	printf("const d : %p\n",&d);
	printf("arry : %p\n",&arr);
	printf("parr : %p\n",parr);

	//배열이름, 문자열 리터럴, 함수이름 => 주소


	// 자바는 메모리를 가비지 컬렉터가 관리

	/*
		메모리구조
		data segment : stack, head, data
		code segment : s
	*/

	return 0;
}