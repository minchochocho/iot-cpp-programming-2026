#include"ArrayUtil.h"
#include<iostream>
using namespace std;

template<typename T,size_t N>
void printArr(T(&arr)[N]) {
	for (int i = 0; i < size(arr)-1; i++) {
		cout << arr[i] << " ";
	}
}