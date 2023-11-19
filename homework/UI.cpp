#include <iostream>
#include "UI.h"

int UI::getMenu() {
    int key;
    std::cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
    std::cin >> key;
    return key;
}

int UI::getShapeTypeToInsert() {
    int key;
    std::cout << "원:1, 선:2, 사각형:3 >>";
    std::cin >> key;
    return key;
}

int UI::getShapeIndexToDelete() {
    int key;
    std::cout << "삭제하고자 하는 도형의 인덱스 >>";
    std::cin >> key;
    return key;
}