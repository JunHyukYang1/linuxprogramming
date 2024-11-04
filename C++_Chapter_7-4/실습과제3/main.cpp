#include <iostream>               // C++에서 입출력 표준 라이브러리를 사용하기 위한 헤더 파일 포함
#include "Mul.hpp"                // 같은 디렉터리 내에서 만든 헤더 파일 포함
using namespace std;              // C++에서 표준 라이브러리의 모든 이름을 사용하기 위한 구문

int main() {
    Power a(3, 5), b;             // Power 클래스의 객체 a, b 생성
    a.show();                     // 객체 a를 출력
    b.show();                     // 객체 b를 출력
    b = 2 * a;                    // 정수 객체 간 곱셈 연산을 수행 후 객체 b에 저장
    a.show();                     // 객체 a 출력
    b.show();                     // 연산 후 값을 저장한 객체 b 출력
}
