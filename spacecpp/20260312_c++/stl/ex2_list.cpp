#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> l;  //LinkedList

    l.push_back(10);
    l.push_front(5);

    for (int x : l) {
        cout << x << endl;
    }
}