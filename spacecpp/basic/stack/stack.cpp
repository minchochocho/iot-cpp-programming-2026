#include <iostream>
#include<stack>
using namespace std;

int main() {
	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "top: " << s.top() << endl;

	s.pop();
	cout << "top after pop: " << s.top() << endl;


	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
}
