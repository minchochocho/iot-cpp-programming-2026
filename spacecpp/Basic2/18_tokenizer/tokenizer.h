#ifndef _TOKENIZER_H_
#define _TOKENIZER_H_
#include<string.h>
#include<iostream>
using namespace std;

class Tokenizer {
private:
	string target;
	string delimiters;	// 구분자 문자열
	int begin;
	int end;
public:
	Tokenizer(const string& target, const string& delimiters);
	~Tokenizer();
	bool hasNextToken();
	string nextToken();
};



#endif // !_TOKENIZER_H_
