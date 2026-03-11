#include"professor.h"

Professor::Professor(string name, double salary) : Person(name), salary(salary) {
	assert(salary >= 0.0);
}

Professor::~Professor() {

}

void Professor::print() {
	cout << "Professor Name: " << name << endl;
	cout << "Salary: " << salary << endl;
}