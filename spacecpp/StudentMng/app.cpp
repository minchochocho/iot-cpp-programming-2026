/**************************************************************
 * 모든 클래스를 사용하는 애플리케이션 파일                   *
 **************************************************************/
#include "registrar.h"

int main()
{
	// Registrar 객체 인스턴스화
	Registrar registrar;
	// Student 객체 인스턴스화
	Student student1("John");
	Student student2("Mary");
	Student student3("Ann");
	// Course 객체 3개 인스턴스화
	Course course1("CIS101", 4);
	Course course2("CIS102", 3);
	Course course3("CIS103", 3);
	// Registrar 객체를 기반으로 학생이 과목 수강 등록
	registrar.enroll(student1, course1);
	registrar.enroll(student1, course2);
	registrar.enroll(student2, course1);
	registrar.enroll(student2, course3);
	registrar.enroll(student3, course1);
	// Student 객체의 정보 출력
	student1.print();
	student2.print();
	student3.print();
	// Course 객체의 정보 출력
	course1.print();
	course2.print();
	course3.print();
	return 0;
}