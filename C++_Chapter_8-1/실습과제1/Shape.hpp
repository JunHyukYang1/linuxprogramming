#ifndef _SHAPE_HPP_            // 헤더 파일 중복 포함 방지를 위한 조건부 컴파일 지시자
#define _SHAPE_HPP_            // 매크로 정의

class Shape {                  // Shape 클래스 생성
    int x, y;                  // priavate 멤버 변수 선언
public:
    void set(int x, int y);    // 변수에 값을 저장하는 멤버 함수 선언
    void show_S();             // 결과 출력을 위한 멤버 함수 선언
};

class Circle : public Shape {         // 클래스 Shape를 상속하는 Circle 클래스 생성
    int r;
public:
    void setCircle(int x, int y, int r);
    void show();
};

class Rect : public Shape {
    int width, height;
public:
    void setRect(int x, int y, int width, int height);
    void show();
};

class Triangle : public Shape {
    int base, height;
public:
    void setTriangle(int x, int y, int base, int height);
    void show();
};

#endif
