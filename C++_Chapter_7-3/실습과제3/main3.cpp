#include <iostream>
using namespace std;

class Power
{
    int kick;                // Power 클래스의 멤버 변수 kick
    int punch;               // Power 클래스의 멤버 변수 punch
public:
    Power (int kick = 0, int punch = 0) {              // 클래스 Power의 기본적인 생성자 정의
        this -> kick = kick, this -> punch = punch;
    }
    Power operator- (int op2);                      // 객체와 정수 간의 연산을 위한 - 연산자 재정의 선언
    void show();                                     // 결과 출력을 위한 멤버 함수
};

void Power::show() {                                         // show() 함수 정의
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power Power::operator- (int op2) {                      // - 연산자 재정의
    Power tmp;                                           // 결과를 저장할 tmp 객체 생성
    tmp.kick = this -> kick - op2;                       // 객체의 변수 kick과 정수를 연산한 결과를 tmp의 변수 kick에 저장
    tmp.punch = this -> punch - op2;                      // 객체의 변수 punch와 정수를 연산한 결과를 tmp의 변수 punch에 저장
    return tmp;                                      // tmp를 반환
}

int main()
{
    Power a(3, 5), b;                       // 객체 a와 b 생성
    a.show();                               // 초기 설정한 a 출력
    b.show();                               // 초기 설정한 b 출력
    b = a - 2;                              // b는 객체 a와 정수 2를 - 연산한 결과
    a.show();                               // a를 다시 출력
    b.show();                               // 위에서 연산한 후의 b를 출력
    return 0;
}
