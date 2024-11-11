#include <iostream>
#include "Shape.hpp"
using namespace std;

Shape::Shape(int x, int y) {
    this->x = x, this->y = y;
    cout << "Shape 생성, ";
}
void Shape::show() {
    cout << x << ", " << y;
}
Shape::~Shape() {
    cout << ", Shape 소멸" << endl;
}

Circle::Circle(int x, int y, int r) : Shape(x, y) {
    this->r = r;
    cout << "Circle 생성" << endl;
}
void Circle::show() {
    cout << "좌표 (";
    Shape::show();
    cout << ")에 반지름 " << r << "인 원" << endl;
}
Circle::~Circle() {
    cout << "Circle 소멸";
}

Rect::Rect(int x, int y, int width, int height) : Shape(x, y) {
    this->width = width, this->height = height;
    cout << "Rect 생성" << endl;
}
void Rect::show() {
    cout << "좌표 (";
    Shape::show();
    cout << ")에 폭 " << width << ", 높이 " << height << "인 직사각형" << endl;
}
Rect::~Rect() {
    cout << "Rect 소멸";
}

Triangle::Triangle(int x, int y, int base, int height) : Shape(x, y) {
    this->base = base, this->height = height;
    cout << "Triangle 생성" << endl;
}
void Triangle::show() {
    cout << "좌표 (";
    Shape::show();
    cout << ")에 밑변 " << base << ", 높이 " << height << "인 삼각형" << endl;
}
Triangle::~Triangle() {
    cout << "Triangle 소멸";
}