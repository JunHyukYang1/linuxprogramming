#ifndef _SHAPE_HPP_        // 헤더 파일의 중복 포함을 방지하기 위한 조건부 컴파일 지시자
#define _SHAPE_HPP_        // 매크로 정의

class Shape {     // Shape 클래스 선언
    int x;        // private 멤버 변수 x
    int y;        // private 멤버 변수 y
public:
    Shape(int x, int y);      // Shape 클래스의 생성자 선언
    void show();              // 결과 출력을 위한 멤버 함수 선언
    ~Shape();                 // Shape 클래스의 소멸자 선언
};

class Circle : public Shape {      // Shape 클래스를 public으로 상속하는 Circle 클래스 선언
    int r;                         // private 멤버 변수 r
public:
    Circle(int x, int y, int r);     // Circle 클래스의 생성자 선언
    void show();                     // 결과 출력을 위한 멤버 함수 선언
    ~Circle();                       // Circle 클래스의 소멸자 선언
};

class Rect : public Shape {         // Shape 클래스를 public으로 상속하는 Rect 클래스 선언
    int width;                      // private 멤버 변수 width
    int height;                     // private 멤버 변수 height
public:
    Rect(int x, int y, int width, int height);         // Rect 클래스의 생성자 선언
    void show();                                       // 결과 출력을 위한 멤버 함수 선언
    ~Rect();                                           // Rect 클래스의 소멸자 선언
};

class Triangle : public Shape {          // Shape 클래스를 public으로 상속하는 Triangle 클래스 선언
    int base;                            // private 멤버 변수 base
    int height;                          // private 멤버 변수 height
public:
    Triangle(int x, int y, int base, int height);       // Triangle 클래스의 생성자 선언
    void show();                                        // 결과 출력을 위한 멤버 함수 선언
    ~Triangle();                                        // Triangle 클래스의 소멸자 선언
};

#endif
