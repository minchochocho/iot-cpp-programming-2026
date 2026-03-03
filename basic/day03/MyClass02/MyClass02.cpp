#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 학번 이름 나이

class MyClass {
private:
    int id;
    char name[20];
    int age;
public:
    MyClass(int aid, const char* aname, int aage);
    //getdata
    void get_data();

};

MyClass::MyClass(int aid, const char* aname, int aage) {
    id = aid;
    strcpy(name, aname);
    age = aage;
}

//getdata
void MyClass::get_data() {
    cout << "학번 : " << id << "\n이름 : " << name << "\n나이 : " << age << endl;
}

int main() {
    MyClass m(212121, "hong", 20);
    m.get_data();
}
