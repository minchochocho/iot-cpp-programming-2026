#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2(5);

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (int x : v) {
        cout << x << endl;
    }
}