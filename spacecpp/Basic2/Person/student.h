#ifndef _STUDENT_H_
#define _STUDENT_H_
#include"Person.h"

using namespace std;

class Student: public Person {
private:
	double gpa;
public:
	Student();
	Student(long id, double gp);
	~Student();
	Student(const Student& other);
	void print() const;
};


#endif // !_STUDENT_H_
