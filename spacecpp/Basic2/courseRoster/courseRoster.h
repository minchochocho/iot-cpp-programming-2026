#ifndef _COURSEROSTER_H_
#define _COURSEROSTER_H_
#include<string>
#include<iostream>
#include<cassert>
using namespace std;

class CourseRoster {
private:
	int size;
	string* stdNames;

public:
	CourseRoster();
	~CourseRoster();
	void addStudent(string studentName);
	void print() const;
};

#endif // !_COURSEROSTER_H_
