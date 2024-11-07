#include <iostream>     // 표준 입출력 라이브러리 사용을 위한 헤더 파일 포함
#include "Shape.hpp"    // 같은 디렉터리 내에서 만든 변수 및 함수 선언이 담긴 헤더 파일 포함
using namespace std;    // 표준 라이브러리의 모든 이름 쓰기 위한 구문

void Circle::setCircle(int x, int y, int r) {       // Circle 클래스의 멤버 변수에 값을 저장하는 함수 정의
    this->x = x, this->y = y, this->r = r;          // Shape 클래스의 멤버 변수가 protected로 선언되었기 때문에 바로 값 저장 가능
}

void Circle::show() {                               // Circle 클래스의 결과 출력을 위한 멤버 함수 정의
    cout << "좌표 (" << x << "," << y << ")에 ";    // Shape 클래스의 멤버 변수가 protected로 선언되었기 때문에 바로 값 출력 가능
    cout << "반지름 " << r << "인 원" << endl;
}

void Rect::setRect(int x, int y, int width, int height) {    // Rect 클래스의 멤버 변수에 값을 저장하는 함수 정의
    this->x = x;                                             // Shape 클래스의 멤버 변수가 protected로 선언되었기 때문에 바로 값 저장 가능
    this->y = y;
    this->width = width;
    this->height = height;
}

void Rect::show() {                                   // Rect 클래스의 결과 출력을 위한 멤버 함수 정의
    cout << "좌표 (" << x << "," << y << ")에 ";      // Shape 클래스의 멤버 변수가 protected로 선언되었기 때문에 바로 값 출력 가능
    cout << "폭" << width << ", 높이" << height << "인 직사각형" << endl;
}

void Triangle::setTriangle(int x, int y, int base, int height) {    // Triangle 클래스의 멤버 변수에 값을 저장하는 함수 정의
    this->x = x;                                                    // Shape 클래스의 멤버 변수가 protected로 선언되었기 때문에 바로 값 저장 가능
    this->y = y;
    this->base = base;
    this->height = height;
}

void Triangle::show() {                                 // Triangle 클래스의 결과 출력을 위한 멤버 함수 정의
    cout << "좌표 (" << x << "," << y << ")에 ";        // Shape 클래스의 멤버 변수가 protected로 선언되었기 때문에 바로 값 출력 가능
    cout << "밑변" << base << ", 높이" << height << "인 삼각형" << endl;
}
