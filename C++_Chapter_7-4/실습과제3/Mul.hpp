#ifndef _MUL_HPP_             // 헤더 파일의 중복 포함을 막기 위한 조건부 컴파일 지시자
#define _MUL_HPP_             // _Mul_HPP_ 매크로 정의

class Power {               // Power 클래스 선언
    int kick;               // 멤버 변수 kick 선언
    int punch;              // 멤버 변수 punch 선언
public:
    Power();                         // 멤버변수가 정해지지 않은 생성자 선언
    Power(int kick, int punch);      // 멤버변수를 지정한 생성자 선언
    void show();                         // 결과 출력을 위한 멤버 함수
    friend Power operator*(int op1, Power op2);         // 정수, 객체 곱셈 연산을 위한 *연산자 재정의 프렌드 함수 선언
};

#endif
