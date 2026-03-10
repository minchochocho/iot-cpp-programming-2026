/*************************************************************
 * 변수를 초기화할 때 리터럴을 사용하는 프로그램            *
 *************************************************************/
#include <iostream>
using namespace std;

int main()
{
  // 변수 선언과 초기화
  int x = -1245;
  unsigned int y = 1245;
  unsigned int z = -2367;  //4294964929
  unsigned int t = 14.56;
  // 초기화된 값 출력
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;
  cout << t;
  return 0;
}