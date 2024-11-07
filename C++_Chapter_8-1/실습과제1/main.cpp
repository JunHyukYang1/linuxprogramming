#include <iostream>          // 표준 입출력 라이브러리 사용을 위한 헤더 파일 포함
#include "Shape.hpp"         // 같은 디렉터리 내의 헤더 파일 포함
using namespace std;         // 모든 이름의 표준 라이브러리 사용을 위한 구문

int main() {
    Circle x; Rect y; Triangle z;          // Circle 클래스의 객체 x, Rect 클래스의 객체 y, Triangle 클래스의 객체 z 생성
    x.setCircle(0, 0, 2);                  // 객체 x의 멤버 변수에 각 값들 저장 -> x = 0, y = 0, r = 2
    y.setRect(1, 1, 5, 10);                // 객체 y의 멤버 변수에 각 값들 저장 -> x = 1, y = 1, width = 5, height = 10
    z.setTriangle(2, 2, 3, 4);             // 객체 z의 멤버 변수에 각 값들 저장 -> x = 2, y = 2, base = 3, height = 4
    x.show(); y.show(); z.show();          // 각 객체들의 결과를 출력
}
