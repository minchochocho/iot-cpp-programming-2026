#ifndef _PERSON_H_
#define _PERSON_H_
#include<iostream>
#include<cassert>
#include<iomanip>

using namespace std;

class Person {
private:
	long identity;
public:
	Person();
	Person(long identity);
	~Person();
	Person(const Person& other);
	void print() const;
};


#endif // !_PERSON_H_
