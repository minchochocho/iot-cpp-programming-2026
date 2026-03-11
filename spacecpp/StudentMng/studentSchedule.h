/**************************************************************
 * StudentSchedule 클래스의 인터페이스 파일                   *
 **************************************************************/
#ifndef STUDENTSCHEDULE_H
#define STUDENTSCHEDULE_H
#include <string>
#include <iostream>
#include <cassert> 
using namespace std;

// 클래스 정의
class StudentSchedule
{
private:
    int size;
    string* courseNames;
public:
    StudentSchedule();
    ~StudentSchedule();
    void addCourse(string course);
    void print() const;
};
#endif