#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T content;
public:
    void setContent(T item) { content = item; }
    T getContent() { return content; }
};

int main() {
    // 클래스 템플릿은 사용 시 <타입>을 명시해줘야 합니다.
    Box<int> intBox;
    intBox.setContent(100);

    Box<double> doubleBox;
    doubleBox.setContent(3.14);

    cout << "Integer Box: " << intBox.getContent() << endl;
    cout << "Double Box: " << doubleBox.getContent() << endl;

    return 0;
}