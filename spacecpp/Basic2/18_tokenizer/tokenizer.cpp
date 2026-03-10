#include "tokenizer.h"

Tokenizer::Tokenizer(const string& target, const string& delimiters) 
	:target(target), delimiters(delimiters)
{
	// 공백 제거(Trimming)나 특정 패턴이 아닌 '진짜 데이터'가 시작되는 지점을 찾을 때
	// find_first_of 문자열의 처음부터 훑으면서, 제시한 문자들에 포함되는 첫 번째 위치를 반환
	this->begin = target.find_first_not_of(delimiters, 0);	// 공백이나 줄바꿈이 아닌것을 먼저 찾음 => 단어의 첫글자
	this->end = target.find_first_not_of(delimiters, begin);// 그 사이의 값을 end에 넣음
}

Tokenizer::~Tokenizer(){ }

bool Tokenizer::hasNextToken() {
	return this->begin != string::npos;
}

string Tokenizer::nextToken() {
	string token = this->target.substr(this->begin, this->end - this->begin);
	this->begin = this->target.find_first_not_of(this->delimiters, this->end);
	this->end = this->target.find_first_of(this->delimiters, this->begin);
	return token;
}
