#include "Shape.hpp"            // 디렉터리 내의 Shape.hpp 헤더 파일 포함
#include <iostream>             // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;            // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

int main() {
    Circle x(0, 0, 2);           // Circle 클래스의 객체 x 생성
    Rect y(1, 1, 5, 10);         // Rect 클래스의 객체 y 생성
    Triangle z(2, 2, 5, 10);     // Triangle 클래스의 객체 z 생성
    x.show();                    // 객체 x의 결과 출력
    y.show();                    // 객체 y의 결과 출력
    z.show();                    // 객체 z의 결과 출력
}
