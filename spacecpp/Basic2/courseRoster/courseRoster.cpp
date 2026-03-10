#include"courseRoster.h"

CourseRoster::CourseRoster()
	:size(0) {
	stdNames = new string[20];
}

CourseRoster::~CourseRoster() {
	delete[] stdNames;
}

void CourseRoster::addStudent(string studentName) {
	if (size < 20) {
		stdNames[size] = studentName;
		size++;
	}
	else {
		cout << "Course roster is full. Cannot add more students." << endl;
	}
}