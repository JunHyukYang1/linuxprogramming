#include <iostream>         // 입출력 표준 라이브러리를 사용하기 위한 헤더 파일 포함
#include "Shape.hpp"        // 클래스들의 선언이 담긴 "Shape.hpp" 헤더 파일 포함
using namespace std;        // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

Shape::Shape(int x, int y) {       // Shape 클래스의 생성자 정의
    this->x = x, this->y = y;      // 각 멤버 변수에 값 저장
    cout << "Shape 생성, ";
}
void Shape::show() {               // 결과 출력을 위한 show() 함수 정의
    cout << x << ", " << y;
}
Shape::~Shape() {                  // Shape 클래스의 소멸자 정의
    cout << ", Shape 소멸" << endl;
}

Circle::Circle(int x, int y, int r) : Shape(x, y) {        // Shape 클래스의 생성자를 상속함을 명시하는 Circle 클래스의 생성자 정의
    this->r = r;                                           // 멤버 변수 r에 값 저장
    cout << "Circle 생성" << endl;
}
void Circle::show() {            // 결과 출력을 위한 show() 함수 정의
    cout << "좌표 (";
    Shape::show();               // 상속받은 Shape 클래스의 멤버 함수 show()를 활용
    cout << ")에 반지름 " << r << "인 원" << endl;
}
Circle::~Circle() {              // Circle 클래스의 소멸자 정의
    cout << "Circle 소멸";
}

Rect::Rect(int x, int y, int width, int height) : Shape(x, y) {     // Shape 클래스의 생성자를 상속함을 명시하는 Rect 클래스의 생성자 정의
    this->width = width, this->height = height;                     // 멤버 변수 width와 height에 값 저장
    cout << "Rect 생성" << endl;
}
void Rect::show() {            // 결과 출력을 위한 show() 함수 정의
    cout << "좌표 (";
    Shape::show();             // 상속받은 Shape 클래스의 멤버 함수 show()를 활용
    cout << ")에 폭 " << width << ", 높이 " << height << "인 직사각형" << endl;
}
Rect::~Rect() {                // Rect 클래스의 소멸자 정의
    cout << "Rect 소멸";
}

Triangle::Triangle(int x, int y, int base, int height) : Shape(x, y) {     // Shape 클래스의 생성자를 상속함을 명시하는 Triangle 클래스의 생성자 정의
    this->base = base, this->height = height;                              // 멤버 변수 base와 height에 값 저장
    cout << "Triangle 생성" << endl;
}
void Triangle::show() {            // 결과 출력을 위한 show() 함수 정의
    cout << "좌표 (";
    Shape::show();                 // 상속받은 Shape 클래스의 멤버 함수 show()를 활용
    cout << ")에 밑변 " << base << ", 높이 " << height << "인 삼각형" << endl;
}
Triangle::~Triangle() {            // Triangle 클래스의 소멸자 정의
    cout << "Triangle 소멸";
}
