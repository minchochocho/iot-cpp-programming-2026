/**************************************************************
 * Course 클래스의 구현 파일                                  *
 **************************************************************/
#include "course.h"

 // 생성자
Course::Course(string nm, int ut)
	: name(nm), units(ut)
{
	roster = new CourseRoster;
}
// 소멸자
Course::~Course()
{
}
// getName 함수의 정의
string Course::getName() const
{
	return name;
}
// addStudent 함수의 정의
void Course::addStudent(string name)
{
	roster->addStudent(name);
}
// getRoster 함수의 정의
CourseRoster* Course::getRoster() const
{
	return roster;
}
// print 함수의 정의
void Course::print() const
{
	cout << "코스 이름: " << name << endl;
	cout << "과목의 학점: " << units << endl;
	roster->print();
}