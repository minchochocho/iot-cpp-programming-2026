#include"tokenizer.h"

int main() {
	string str = "Passion is genesis of genius - Galilleo Galilei";
	string delimiters = " \n";	// << 공백, 줄바꿈 필수 이게 구분자
	Tokenizer tokenizer(str, delimiters);

	while (tokenizer.hasNextToken()) {
		cout << tokenizer.nextToken() << endl;
	}
}