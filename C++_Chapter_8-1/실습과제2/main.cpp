#include <iostream>         // 표준 입출력 라이브러리 사용을 위한 헤더 파일
#include "Shape.hpp"        // 같은 디렉터리 내 헤더 파일 포함
using namespace std;        // 모든 이름의 표준 디렉터리를 사용하기 위한 구문

int main() {
    Circle x; Rect y; Triangle z;       // Circle 클래스 객체 x, Rect 클래스 객체 y, Triangle 클래스 객체 z 생성
    x.setCircle(0, 0, 2);               // 객체 x의 멤버 변수 설정
    y.setRect(1, 1, 5, 10);             // 객체 y의 멤버 변수 설정
    z.setTriangle(2, 2, 3, 4);          // 객체 z의 멤버 변수 설정
    x.show(); y.show(); z.show();       // 객체들의 결과 출력
}
