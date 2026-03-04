#include<iostream>

class Position {
public:
	int m_x, m_y;
	Position(int x, int y) { m_x = x, m_y = y; }
};

class objSome {
public:
	Position p;
	objSome(int x,int y):p(x,y){ }	// 일반 변수들도 메머 변수처럼 써도 상관X
	void show() {
		printf("%d %d\n",p.m_x,p.m_y);
	}
};

int main() {
	objSome os(10, 30);
	os.show();
}