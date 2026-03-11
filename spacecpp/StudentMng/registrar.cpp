/**************************************************************
 * Registrar 클래스의 구현 파일                               *
 **************************************************************/
#include "registrar.h"

 // 생성자
Registrar::Registrar()
{
}
// 소멸자
Registrar::~Registrar()
{
}
// enroll 함수
void Registrar::enroll(Student student, Course course)	// 학생과 코스를 넣어서 등록시킴
{
	(course.getRoster())->addStudent(student.getName());
	(student.getSchedule())->addCourse(course.getName());
}