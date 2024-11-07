#include <iostream>
#include "Shape.hpp"
using namespace std;

void Circle::setCircle(int x, int y, int r) {
    this->x = x, this->y = y, this->r = r;
}

void Circle::show() {
    cout << "좌표 (" << x << "," << y << ")에 ";
    cout << "반지름 " << r << "인 원" << endl;
}

void Rect::setRect(int x, int y, int width, int height) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

void Rect::show() {
    cout << "좌표 (" << x << "," << y << ")에 ";
    cout << "폭" << width << ", 높이" << height << "인 직사각형" << endl;
}

void Triangle::setTriangle(int x, int y, int base, int height) {
    this->x = x;
    this->y = y;
    this->base = base;
    this->height = height;
}

void Triangle::show() {
    cout << "좌표 (" << x << "," << y << ")에 ";
    cout << "밑변" << base << ", 높이" << height << "인 삼각형" << endl;
}