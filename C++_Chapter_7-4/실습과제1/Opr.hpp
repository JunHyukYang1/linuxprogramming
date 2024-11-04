#ifndef _OPR_HPP_           // 헤더 파일의 중복 포함을 막기 위한 조건부 컴파일 지시자
#define _OPR_HPP_           // _OPR_HPP_ 매크로 정의

class Complex {            // Complex 클래스 선언
    int real;              // 멤버 변수 real 선언
    int img;               // 멤버 변수 img 선언
public:
    Complex(int real, int img);         // 생성자를 멤버 함수로 선언
    void show();                        // 결과 출력에 필요한 멤버 함수 선언
    Complex& operator++ ();             // 전위 증가 연산자를 재정의하기 위한 선언
    Complex operator-- (int x);         // 후위 감소 연산자를 재정의하기 위한 선언
};

#endif
