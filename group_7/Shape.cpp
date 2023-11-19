#include "Shape.h"

Shape::Shape() { next = nullptr; }
Shape::~Shape() {}
Shape* Shape::add(Shape* p) {
    this->next = p;
    return p;
}
void Shape::paint() { draw(); }
Shape* Shape::getNext() { return next; }