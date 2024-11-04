#include <iostream>                     // 입출력 표준 라이브러리를 사용하기 위한 헤더파일
#include "Opr.hpp"                      // 같은 디렉터리 내 "Opr.hpp" 헤더 파일 포함
using namespace std;                    // C++의 표준 라이브러리에서 모든 이름을 사용하기 위한 구문

Complex::Complex(int real, int img) {                         // Complex 객체 생성자 정의
    this->real = real; this->img = img;
    cout << "복소수 " << real << "+" << img << "j 생성" << endl;           // 객체가 생성되었음을 출력
}

void Complex::show() {                                // 결과를 출력하기 위한 함수 show() 정의
    cout << real << "+" << img << "j" << endl;
}

Complex& operator++(Complex& op) {               // 전위 증가 연산자 재정의, 참조 변수 사용, 전역 함수
    op.real++;                              // 멤버 변수 real 증가 연산 수행
    op.img++;                               // 멤버 변수 img 증가 연산 수행
    return op;                              // 연산 후 결과 반환
}

Complex operator--(Complex& op, int x) {           // 후위 감소 연산자 재정의, 전역 함수
    Complex tmp = op;                              // 연산 전 멤버 변수를 tmp 객체에 저장
    op.real--;                                 // 멤버 변수 real 감소 연산 수행
    op.img--;                                  // 멤버 변수 img 감소 연산 수행
    return tmp;                                // 연산 전 값을 저장한 tmp 반환
}
