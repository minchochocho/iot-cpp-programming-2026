/*************************************************************
 * 이스케이프 문자를 사용하는 프로그램                       *
 *************************************************************/
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello\n";
  cout << "Hi\t friends." << endl;
  cout << "Buenos dias  \bamigos." << endl; // 중간에 2칸 띄어쓰기 
  cout << "Hello\rBonjour mes amis." << endl;
  cout << "This is a single quote\'." << endl;
  cout << "This is a double quote\"." << endl;
  cout << "This is how to print a backslash \\."; 
  return 0;
}