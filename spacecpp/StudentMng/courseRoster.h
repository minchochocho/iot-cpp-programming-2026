/**************************************************************
 * CourseRoster 클래스의 인터페이스 파일                      *
 **************************************************************/
#ifndef COURSEROSTER_H
#define COURSEROSTER_H
#include <string>
#include <iostream>
#include <cassert> 
using namespace std;

// 클래스 정의
class CourseRoster      // 명단
{
private:
    int size;
    string* stdNames;   // 학생 이름
public:
    CourseRoster();
    ~CourseRoster();
    void addStudent(string studentName);
    void print() const;
};
#endif