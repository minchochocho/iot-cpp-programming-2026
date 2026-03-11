/**************************************************************
 * Student 클래스의 구현 파일                                 *
 **************************************************************/
#include "student.h"

 // 생성자
Student::Student(string nm)
	:name(nm)
{
	schedule = new StudentSchedule;
}
// 소멸자
Student::~Student()
{
}
// getName 함수의 정의
string Student::getName() const
{
	return name;
}
// getSchedule 함수의 정의
StudentSchedule* Student::getSchedule() const
{
	return schedule;
}
// addCourse 함수의 정의  
void Student::addCourse(string name)
{
	schedule->addCourse(name);
}
// print 함수의 정의
void Student::print() const
{
	cout << "학생 이름: " << name << endl;
	schedule->print();
}