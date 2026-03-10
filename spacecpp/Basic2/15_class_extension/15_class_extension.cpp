
#include <iostream>
using namespace std;
class Parent {
private:
	long id;
public:
	void setId(long id);
	long getId();
	Parent(long id);
};

Parent::Parent(long id) {
	if (id>=100000l && id<=999999L) {
		this->id=id;
	}
}

void Parent::setId(long id) {
	this->id = id;
}

long Parent::getId() {
	return id;
}

class Child :public Parent {
private:
	double tech_level;
public:
	void setLevel(double t_level);
	double getLevel();
	Child(long id, double tech_level);
	Child();
};

Child::Child(long id, double t_level) : Parent(id) {
	tech_level = t_level;
}

Child::Child() : Parent(01),tech_level(0.0){

}
void Child::setLevel(double t_level) {
	tech_level = t_level;
}

double Child::getLevel() {
	return tech_level;
}


int main() {
	Child c;
	c.setId(212121l);
	cout << "Child의 id" << c.getId() << endl;


	return 0;
}

