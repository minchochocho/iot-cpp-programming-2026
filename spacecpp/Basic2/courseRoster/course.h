#ifndef _COURSE_H_
#define _COURSE_H_
#include<string>
#include<iostream>
#include<cassert>
#include"courseRoster.h"
using namespace std;

class Course {
private:
	string name;
	int units;
	CourseRoster* roster;
public:
	Course(string name, int units);
	~Course();
	string getName() const;
	CourseRoster* getRoster() const;
	void addStudent(string name);
	void print() const;
};

#endif // !_COURSE_H_