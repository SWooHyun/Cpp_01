#include <iostream>
#include "UI.h"

int UI::getMenu() {
    int key;
    std::cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
    std::cin >> key;
    return key;
}

int UI::getShapeTypeToInsert() {
    int key;
    std::cout << "��:1, ��:2, �簢��:3 >>";
    std::cin >> key;
    return key;
}

int UI::getShapeIndexToDelete() {
    int key;
    std::cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
    std::cin >> key;
    return key;
}