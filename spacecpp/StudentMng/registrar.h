/**************************************************************
 * Registrar 클래스의 인터페이스 파일                         *
 **************************************************************/
#ifndef REGISTRAR_H
#define REGISTRAR_H
#include "course.h"
#include "student.h"

 // 클래스 정의
class Registrar
{
public:
    Registrar();
    ~Registrar();
    void enroll(Student student, Course course);    // 참여 시키는거
};
#endif
