// 베열 크기를 입력받고, 3개의 숫자를 입력받아서 배열을 완성하는 코드를 작성
// 단, 메모리 동적 할당으로
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	int size;
	int* arr = NULL;

	while (1) {
		printf("배열 크기를 입력하세요 : ");

		if (scanf("%d", &size) == 1 && size > 0) {
			break;
		}
		puts("오류 : 1이상의 숫자를 입력해주세요");

		// 버퍼 비우기 (잘못 입력된 문자들을 제거)
		while (getchar() != '\n');

	}

	arr = (int*)calloc(size, sizeof(int));

	if (arr == NULL) {
		printf("메모리 할당 실패!\n");
		return -1;
	}
	for (int i = 0; i < size; i++) {
		printf("숫자를 입력하세요 : ");
		scanf("%d", &arr[i]);
		puts("");
	}
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}

	free(arr);

	return 0;
}
