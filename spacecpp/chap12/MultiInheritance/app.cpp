#include"ta.h"

int main() {
	TA ta("Alice", 3.8, 15000);
	ta.print();

	Person person("Charlie");
	Student student("Bob", 3.5);

	Student* studentPtr = &ta;
	studentPtr->print();

	Professor* professorPtr = &ta;
	professorPtr->print();

	Professor professor("David", 8000);

	return 0;
}
