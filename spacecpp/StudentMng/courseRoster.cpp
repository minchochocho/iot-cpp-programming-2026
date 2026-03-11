/**************************************************************
 * CourseRoster 클래스의 구현 파일                            *
 **************************************************************/
#include "courseRoster.h"

 // 생성자
CourseRoster::CourseRoster()
    :size(0)
{
    stdNames = new string[20];
}
// 소멸자
CourseRoster::~CourseRoster()
{
    delete[] stdNames;
}
// addStudent 함수의 정의
void CourseRoster::addStudent(string studentName)
{
    stdNames[size] = studentName;
    size++;
}
// print 함수의 정의
void CourseRoster::print() const
{
    cout << "수강하는 학생 목록" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << stdNames[i] << endl;
    }
    cout << endl;
}