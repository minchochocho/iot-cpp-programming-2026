#include<iostream>
#include<iomanip>
#include"ArrayUtil.h"

using namespace std;

int main() {
	int arr[] = { 1,2,3,4,5 };
	int sum = 0;

	for (int i = 0; i < size(arr); i++) {
		sum += arr[i];
	}
	cout << "sum: " << sum << endl;
	cout << "average: " << static_cast<double>(sum) / size(arr) << endl;

	int arr2[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	int tmp[4][5] = { 0 };
	//memset(tmp, 0, sizeof(tmp));

	printArr(arr2);

	for (int i = 0; i < size(arr2); i++) {
		sum = 0;
		for (int j = 0;j < size(arr2[i]); j++) {
			tmp[i][j] = arr2[i][j];
			cout <<setw(2) << tmp[i][j] << " ";
			tmp[i + 1][size(arr2[j])] += arr2[i][j];
			tmp[size(arr2)][j] += arr2[i][j];
		}
		cout << setw(2) << tmp[i + 1][4] << " ";
		tmp[size(arr2)][size(arr2)] += tmp[i + 1][4];
		cout << endl;
	}
	for (int i = 0; i < 4; i++) {
		cout << setw(2) << tmp[3][i] << " ";
	}
	cout << tmp[size(arr2)][size(arr2)];
}