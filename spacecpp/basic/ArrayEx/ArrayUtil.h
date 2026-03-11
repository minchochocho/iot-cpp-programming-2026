#ifndef _ARRAYUTIL_H_
#define _ARRAYUTIL_H_

#include <iostream>
#include <iterator>
#include <random> // 난수 생성을 위해 추가

using namespace std;

// 1. 난수 생성 함수 (shuffleArr에서 사용하기 위해 상단 배치)
template<typename T>
T getRandom(T min, T max) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<T> dist(min, max); // 범위를 인자로 전달
    return dist(gen); // 생성된 난수 반환
}

// 2. 배열 출력 함수
template<typename T, size_t N>
void printArr(T(&arr)[N]) {
    for (size_t i = 0; i < N; i++) { // size_t로 통일
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 3. 배열 초기화 함수 (0부터 N-1까지)
template<size_t N>
int(&initArr(int(&arr)[N]))[N] {
    for (size_t i = 0; i < N; i++) {
        arr[i] = static_cast<int>(i);
    }
    return arr;
}

// 4. 배열 요소 섞기 함수 (Fisher-Yates Shuffle 방식)
template<size_t N>
int(&shuffleArr(int(&arr)[N]))[N] {
    for (size_t i = 0; i < N; i++) {
        // 현재 인덱스(i)부터 마지막 인덱스(N-1) 사이의 무작위 인덱스 선택
        size_t j = getRandom<size_t>(i, N - 1);

        // 값 교환 (std::swap을 사용하면 더 깔끔합니다)
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    return arr;
}

#endif // !_ARRAYUTIL_H_