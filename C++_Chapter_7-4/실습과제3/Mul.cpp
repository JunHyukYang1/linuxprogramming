#include <iostream>               // 입출력 표준 라이브러리를 사용하기 위한 헤더파일
#include "Mul.hpp"                // 같은 디렉터리 내 "Mul.hpp" 헤더 파일 포함
using namespace std;              // C++의 표준 라이브러리에서 모든 이름을 사용하기 위한 구문

Power::Power() {                      // 멤버변수가 모두 0인 객체 생성
    this->kick = 0, this->punch = 0;
}

Power::Power(int kick, int punch) {           // 객체 생성자 정의
    this->kick = kick, this->punch = punch;
}

void Power::show() {                        // 결과 출력을 위한 show() 함수 정의
    cout << "kick = " << kick << ", punch = " << punch << endl; 
}

Power operator*(int op1, Power op2) {         // *연산자 재정의
    Power tmp;                               // 연산 후 값을 저장할 객체 생성
    tmp.kick = op1 * op2.kick;
    tmp.punch = op1 * op2.punch;
    return tmp;                             // 연산 후의 객체를 반환
}
