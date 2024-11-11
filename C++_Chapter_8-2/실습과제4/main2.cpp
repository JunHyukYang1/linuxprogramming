#include <iostream>           // 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;          // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

class Point {           // Point 클래스 정의
    int x, y;           // private 멤버 변수 x, y
public:
    Point(int x, int y) { this->x = x, this->y = y; }      // Point 클래스의 생성자 정의, 멤버 변수에 값 저장
    int getX() { return x; }                               // 멤버 변수 x를 반환하는 멤버 함수
    int getY() { return y; }                               // 멤버 변수 y를 반환하는 멤버 함수
protected:
    void move(int x, int y) { this->x = x, this->y = y; }    // 멤버 변수의 값을 저장하는 protected 멤버 함수 정의
};

class ColorPoint : public Point {            // Point 클래스를 public으로 상속하는 ColorPoint 클래스 정의
    string name;                             // private 멤버 변수 name
public:
    ColorPoint(int x, int y, string name) : Point(x, y) {        // Point 클래스의 생성자를 상속함을 명시하는 ColorPoint 클래스의 생성자 정의
        this->name = name;                                       // 멤버 변수 name에 값 저장
    }
    void setPoint(int x, int y) {                                // 부모 클래스의 멤버 함수를 활용하여 멤버 변수 x, y의 값을 변경하는 함수 정의
        move(x, y);
    }
    void setColor(string name) {                                 // 멤버 변수 name에 값을 저장하는 함수 정의
        this->name = name;
    }
    void show() {                      // 부모 클래스의 멤버 함수를 활용하여 결과를 출력하는 함수 show() 정의
        cout << name << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
    }
};

int main() {
    ColorPoint cp(5, 5, "RED");            // ColorPoint 클래스의 객체 cp 생성
    cp.setPoint(10, 20);                   // 멤버 변수 x, y에 값 저장
    cp.setColor("BLUE");                   // 멤버 변수 name에 값 저장
    cp.show();                             // 객체 cp의 결과 출력
}
