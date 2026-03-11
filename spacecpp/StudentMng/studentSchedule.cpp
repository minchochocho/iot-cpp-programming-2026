/**************************************************************
 * StudentSchedule 클래스의 구현 파일                         *
 **************************************************************/
#include "studentSchedule.h"

 // 생성자
StudentSchedule::StudentSchedule()
    :size(0)
{
    courseNames = new string[5];
}
// 소멸자
StudentSchedule::~StudentSchedule()
{
    delete[] courseNames;
}
// addCourse 함수의 정의
void StudentSchedule::addCourse(string name)
{
    courseNames[size] = name;
    size++;
}
// print 함수의 정의
void StudentSchedule::print() const
{
    cout << "수강 과목 목록" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << courseNames[i] << endl;
    }
    cout << endl;
}