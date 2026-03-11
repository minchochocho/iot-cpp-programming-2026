#include<iostream>
#include"ArrayUtil.h"
using namespace std;

int main() {
	int arr1[] = { 1,2,3,4,5 };
	string arr2[] = { "Hello","World","C++" };
	char arr3[] = { 'A','B','C','D', 48 };
	printArr(arr1);
	printArr(arr2);
	printArr(arr3);

	int arr4[10];
	initArr(arr4);
	printArr(arr4);

	shuffleArr(arr4);
	return 0;
}