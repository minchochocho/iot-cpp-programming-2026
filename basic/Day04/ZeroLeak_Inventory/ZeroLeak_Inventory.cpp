// ZeroLeak_Inventory.cpp
// 클래스를 이용한 간단한 인벤토리 시스템
// 아이템 줍기(new)
// 버리기, 사용하기, 강화 실패(delete)
// 아이템 복사
#define _CRE_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Item {
private:
    // 아이템 이름(동적 할당)
    // 동적할당에서는 가벼운 복사가 문제가 생김 깊은 복사를 해야
    char* m_itemName;
    // 공격력 or 방어력
    int m_power;

public:
    Item(const char* iname, int power) :m_power(power) {
        m_itemName = new char[strlen(iname) + 1];
        strcpy(m_itemName, iname);
        cout << "[획득] " << m_itemName << "(공격력 :" << m_power << ")" << endl;
    }
    Item() : m_itemName(nullptr), m_power(0) { }

    // 복사 생성자
    Item(const Item& other) {
        m_itemName = new char[strlen(other.m_itemName) + 1];
        strcpy(m_itemName, other.m_itemName);
        m_power = other.m_power;
        cout << "[복제] " << m_itemName << "의 복사본 생성" << endl;
    }

    // 소멸자
    ~Item() {
        cout << "[파괴] " << m_itemName << "이(가) 파괴되었습니다." << endl;
        delete[] m_itemName;
    }

    void showInfo() {
        if (m_itemName)
            printf(" - %-10s | 위력 : %d\n", m_itemName, m_power);
        else printf("- (비어있음)");
    }
};


int main()
{

}