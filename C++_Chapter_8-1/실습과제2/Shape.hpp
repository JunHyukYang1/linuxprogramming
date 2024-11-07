#ifndef _SHAPE_HPP_            // 헤더 파일 중복 포함 방지를 위한 조건부 컴파일 지시자
#define _SHAPE_HPP_            // 매크로 정의

class Shape {                  // Shape 클래스 선언
protected:
    int x, y;                  // protected로 멤버 변수 선언
};

class Circle : public Shape {         // 클래스 Shape를 상속하는 Circle 클래스 선언
    int r;                            // 반지름 멤버 변수 선언
public:
    void setCircle(int x, int y, int r);     // 변수에 값을 저장하는 멤버 함수 선언
    void show();                             // 결과 출력을 위한 멤버 함수 선언
};

class Rect : public Shape {           // 클래스 Shape를 상속하는 Rect 클래스 선언
    int width, height;                // 폭과 높이 멤버 변수 선언
public:
    void setRect(int x, int y, int width, int height);     // 변수에 값을 저장하는 멤버 함수 선언
    void show();                                           // 결과 출력을 위한 멤버 함수 선언
};

class Triangle : public Shape {        // 클래스 Shape를 상속하는 Triangle 클래스 선언
    int base, height;                  // 밑변과 높이 멤버 변수 선언
public:
    void setTriangle(int x, int y, int base, int height);    // 변수에 값을 저장하는 멤버 함수 선언
    void show();                                             // 결과 출력을 위한 멤버 함수 선언
};

#endif
