#include <iostream>         // 표준 입출력 라이브러리 사용을 위한 헤더 파일 포함
using namespace std;        // 모든 이름의 표준 라이브러리 사용을 위한 구문

class Circle {          // Circle 클래스 정의
    int radius;           // private 멤버 변수 radius
public:
    Circle(int radius = 1) { this->radius = radius; }       // Circle 클래스 생성자 정의
    int getRadius() { return radius; }                      // 멤버 변수 반환
    bool operator> (Circle a);                              // 객체 간 > 연산 재정의를 위한 선언
};

bool Circle::operator> (Circle a) {             // > 연산 재정의
    if(this->radius > a.radius) return true;           // 앞쪽 피연산자 객체의 radius가 뒷쪽 피연산자 객체의 radius보다 크면 true 출력
    else    return false;
}

template <class T>          // 템플릿 함수 정의
T bigger(T a, T b) {            // 매개변수끼리 크기 비교, 보다 큰 매개변수를 반환
    if (a > b)  return a;
    else    return b;
}

int main() {
    int a = 20, b = 50, c;      // 변수 선언
    c = bigger(a, b);           // c는 a와 b를 비교하여 더 큰 값 저장
    cout << "20과 50중 큰 값은 " << c << endl;

    Circle donut(10), pizza(20), y;      // Circle 클래스 객체 donut과 pizza, y 생성
    y = bigger(donut, pizza);            // 객체 간 비교 연산 수행 후 변수에 저장
    cout << "dount과 pizza 중 큰 반지름은 " << y.getRadius() << endl;      // 결과 출력
}
