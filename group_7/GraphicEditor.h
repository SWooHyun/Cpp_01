#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include "Shape.h"

class GraphicEditor {
    Shape* pStart;
    Shape* pLast;
public:
    GraphicEditor();
    void insertItem(int type);
    void deleteItem(int index);
    void show();
    void run();
};

#endif