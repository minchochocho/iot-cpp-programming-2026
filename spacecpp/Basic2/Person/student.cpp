#include"student.h"
#include<cassert>

Student::Student():Person(),gpa(0.0) { }
Student::Student(long id, double gp): Person(id),gpa(gp){
	assert(gpa > -0.0 && gpa <= 4.0);
}

Student::Student(const Student& student) : Person(student),gpa(student.gpa) { }
Student::~Student(){ }

void Student::print()const{ 
	Person::print();
	cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
}