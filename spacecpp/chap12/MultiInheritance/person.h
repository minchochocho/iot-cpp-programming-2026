#ifndef _PERSON_H_
#define _PERSON_H_
#include<iostream>
#include<cassert>
using namespace std;

class Person {
protected:
	string name;
public:
	Person(string name);
	~Person();
	void print();
};

#endif // !_PERSON_H_
