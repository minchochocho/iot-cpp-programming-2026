// 
#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;
	cout << "배열의 크기를 입력해주세요 : " ;
	cin >> size;

	arr = new int[size];	// 동적 할당 : 포인터 = new 자료형

	cout << "만든 배열의 크기 : " << sizeof(int) * size << endl;

	for (int i = 0; i < size; i++) {
		cout << "숫자를 입력해 주세요 : ";
		cin >> arr[i];
		cout << endl;
	}

	for (int i = 0; i < size; i++) {
		cout << "입력된 숫자" << i + 1 << " : " << arr[i] << endl;
	}

	delete[] arr;		// 동적할당 해제


}
