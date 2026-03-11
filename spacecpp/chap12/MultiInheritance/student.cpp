#include"student.h"

Student::Student(string name, double gpa) : Person(name), gpa(gpa) {
	assert(gpa >= 0.0 && gpa <= 4.0);
}

Student::~Student() {

}

void Student::print() {
	cout << "Student Name: " << name << endl;
	cout << "GPA: " << gpa << endl;
}