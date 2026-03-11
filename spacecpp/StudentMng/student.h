/**************************************************************
 * Student 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include <cassert>
#include <string>
#include <iostream>
#include "studentSchedule.h"
using namespace std;

// 클래스 정의
class Student
{
private:
    string name;
    StudentSchedule* schedule;
public:
    Student(string name);
    ~Student();
    string getName() const;
    StudentSchedule* getSchedule() const;
    void addCourse(string name);
    void print() const;
};
#endif
