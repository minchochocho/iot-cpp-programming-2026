// Teaching assistant
#ifndef _TA_H_
#define _TA_H_
#include"student.h"
#include"professor.h"
using namespace std;

class TA : public Professor, public Student {	// 다중상속
public:
	TA(string name, double gpa, double salary);
	~TA();
	void print();
};

#endif // !_PROFESSOR_H_
