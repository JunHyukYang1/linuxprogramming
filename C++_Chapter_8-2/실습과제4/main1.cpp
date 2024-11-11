#include <iostream>         // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;        // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

class Circle {              // Circle 클래스 정의
    int radius;             // private 멤버 변수 radius
public:
    Circle(int radius = 0) { this->radius = radius; }        // Circle 클래스의 생성자 정의
    int getRadius() { return radius; }                       // 멤버 변수 radius에 저장된 값을 반환하기 위한 멤버 함수 정의
    void setRadius(int radius) { this->radius = radius; }    // 멤버 변수 radius에 값을 저장하기 위한 멤버 함수 정의
    double getArea() { return 3.14 * radius * radius; }      // Circle 즉, 원의 넓이를 계산해 결과를 반환하는 멤버 함수 정의
};

class NamedCircle : public Circle {       // Circle 클래스를 public으로 상속하는 NamedCircle 클래스 정의
    string name;                          // private 멤버 변수 name
public:
    NamedCircle(int radius, string name) {          // NamedCircle 클래스의 생성자 정의
        setRadius(radius);                          // 부모 클래스의 private 멤버 변수에 직접 접근이 불가하므로 멤버 함수를 활용
        this->name = name;                          // 멤버 변수 name에 값 저장
    }
    void show() {                                   // 결과 출력을 위한 show() 멤버 함수 정의
        cout << "반지름이 " << getRadius() << "인 " << name << endl;         // 멤버 변수에 직접 접근하여 출력이 불가능하기 때문에 멤버 함수를 활용
    }
};

int main()
{
    NamedCircle waffle(3, "waffle");      // NamedCirclce 클래스의 객체 waffle 생성
    waffle.show();                        // 객체 waffle의 결과 출력
}
