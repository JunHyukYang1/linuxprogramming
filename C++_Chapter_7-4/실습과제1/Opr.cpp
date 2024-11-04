#include <iostream>              // 입출력 표준 라이브러리를 사용하기 위한 헤더파일
#include "Opr.hpp"               // 같은 디렉터리 내 "Opr.hpp" 헤더 파일 포함
using namespace std;             // C++의 표준 라이브러리에서 모든 이름을 사용하기 위한 구문

Complex::Complex(int real, int img) {                // Complex 객체 생성자 정의
    this->real = real; this->img = img;
    cout << "복소수 " << real << "+" << img << "j 생성" << endl;     // 객체가 생성되었음을 출력
}

void Complex::show() {                                     // 결과를 출력하기 위한 함수 show() 정의
    cout << real << "+" << img << "j" << endl;
}

Complex& Complex::operator++() {        // 전위 증가 연산자 재정의, 참조 변수 사용
    real++;
    img++;
    return *this;                 // 각 멤버 변수의 값이 증가된 후 해당 값들을 반환
}

Complex Complex::operator--(int x) {         // 후위 감소 연산자 재정의
    Complex tmp = *this;                  // 연산 전 멤버 변수를 tmp 객체에 저장
    real--;
    img--;
    return tmp;                       // 후위 연산자이므로 연산 전의 tmp를 반환
}
