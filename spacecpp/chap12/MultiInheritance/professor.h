#pragma once
#ifndef _PROFESSOR_H_
#define _PROFESSOR_H_
#include"person.h"
using namespace std;

class Professor : virtual public Person {
protected:
	double salary;
public:
	Professor(string name, double salary);
	~Professor();
	void print();
};

#endif // !_PROFESSOR_H_
