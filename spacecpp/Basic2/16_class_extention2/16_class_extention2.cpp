#include <iostream>
using namespace std;

class Person {
private:
	long id;
public:
	void setId(long Id);
	long getId()const;
	Person(id) { this->id = id; }
};

class Student : public Person {
private:
	double gpa;
public:
	void setGPA(double gpa);
	double getGPA() const;
	void set(long, double);
	Student(long id):Person(id){ }
};

// 위임
void Student::set(long id, double gp) {
	Person::setId(id);
	gpa = gp;
}

void Student::print() {
	Person::print();
	cout << gpa;
}

int main()
{

}