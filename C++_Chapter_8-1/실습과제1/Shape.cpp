#include <iostream>
#include "Shape.hpp"
using namespace std;

void Shape::set(int x, int y) {
    this->x = x, this->y = y;
}

void Shape::show_S() {
    cout << "좌표 (" << x << "," << y << ")에 ";
}

void Circle::setCircle(int x, int y, int r) {
    set(x, y);
    this->r = r;
}

void Circle::show() {
    show_S();
    cout << "반지름 " << r << "인 원" << endl;
}

void Rect::setRect(int x, int y, int width, int height) {
    set(x, y);
    this->width = width;
    this->height = height;
}

void Rect::show() {
    show_S();
    cout << "폭" << width << ", 높이" << height << "인 직사각형" << endl;
}

void Triangle::setTriangle(int x, int y, int base, int height) {
    set (x, y);
    this->base = base;
    this->height = height;
}

void Triangle::show() {
    show_S();
    cout << "밑변" << base << ", 높이" << height << "인 삼각형" << endl;
}