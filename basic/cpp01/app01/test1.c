// 

#include<stdio.h>

// 전역변수
int n = 3.14;

int main() {
	char arr[] = "hong";	// 스택 영역에 저장
	char* arr1 = "hong";		// "hong"은 데이터 세그먼트에 저장
	// -> 지역으로 선언되어 스택 영역에 저장
	//printf("arr : %s",arr);

	printf("arr : %p\n", arr);
	printf("arr1 : %p\n", &arr1);
	printf("hong : %p\n", "hong");

	/*
	printf("arr[0] : %c\n", arr[0]);
	printf("arr[1] : %c\n", arr[1]);
	printf("arr[2] : %c\n", arr[2]);
	printf("arr[3] : %c\n", arr[3]);
	printf("arr[4] : %s\n", arr[4]);
	// 문자열의 끝에는 항상 NULL문자 '\0'이 들어간다

	int i = 0;
	while(i< strlen(arr)){
		printf("arr[i] : %c\n", arr[i]);
		i++;
	}

	for (int i = 0; i < strlen(arr); i++) {
		printf("arr[i] : %c\n", arr[i]);
	}

	*/
	return 0;
}