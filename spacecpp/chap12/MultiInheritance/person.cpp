#include"Person.h"

Person::Person(string name) : name(name){ }

Person::~Person(){ }

void Person::print() {
	cout << "Person name: " << name << endl;
}