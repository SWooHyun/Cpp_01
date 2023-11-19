#include <iostream>
#include "GraphicEditor.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include "UI.h"

GraphicEditor::GraphicEditor() { pStart = pLast = NULL(); }

void GraphicEditor::insertItem(int type) {
    Shape* p = NULL;
    switch (type) {
    case 1:
        p = new Line();
        break;
    case 2:
        p = new Circle();
        break;
    case 3:
        p = new Rectangle();
        break;
    default:
        break;
    }
    if (pStart == NULL) {
        pStart = p;
        pLast = p;
        return;
    }
    pLast = pLast->add(p);
}

void GraphicEditor::deleteItem(int index) {
    Shape* pre = pStart;
    Shape* tmp = pStart;
    if (pStart == NULL) {
        std::cout << "도형이 없습니다!" << std::endl;
        return;
    }
    for (int i = 0; i < index; i++) {
        pre = tmp;
        tmp = tmp->getNext();
    }
    if (tmp == pStart) {
        pStart = tmp->getNext();
        delete tmp; 
    }
    else {
        pre->add(tmp->getNext());
        delete tmp;
    }
}

void GraphicEditor::show() {
    Shape* tmp = pStart;
    int i = 0;
    while (tmp != NULL) {
        std::cout << i++ << ": ";
        tmp->paint();
        tmp = tmp->getNext();
    }
}

void GraphicEditor::run() {
    std::cout << "그래픽 에디터입니다." << std::endl;
    int menu, index, type;
    while (true) {
        menu = UI::getMenu();
        switch (menu) {
        case 1:
            type = UI::getShapeTypeToInsert();
            insertItem(type);
            break;
        case 2:
            index = UI::getShapeIndexToDelete();
            deleteItem(index);
            break;
        case 3:
            show();
            break;
        default:
            return;
        }
    }
}