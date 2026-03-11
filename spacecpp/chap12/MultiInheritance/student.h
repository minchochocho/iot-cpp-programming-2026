#pragma once
#ifndef _STUDENT_H_
#define _STUDENT_H_
#include"person.h"
using namespace std;

class Student: virtual public Person {
protected:
	double gpa;
public:
	Student(string name, double gpa);
	~Student();
	void print();
};

#endif // !_STUDENT_H_
