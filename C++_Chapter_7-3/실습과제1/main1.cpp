#include <iostream>
using namespace std;

class Complex
{
    int real;                                  // 멤버변수 실수부
    int img;                                   // 멤버변수 허수부
public:
    Complex(int real = 0, int img = 0) {            // Complex 클래스의 기본적인 생성자 정의
        this -> real = real, this -> img = img;
    }
    Complex operator+ (Complex op2);            // 클래수 객체끼리의 연산을 위해 + 연산자를 재정의하기위한 선언
    void show();                                // 결과 출력을 위한 멤버 함수
};

void Complex::show() {                            // show()함수 정의
    cout << real << "+" << img << "j" << endl;    // 'real' + 'img'j와 같이 출력
}

Complex Complex::operator+ (Complex op2) {            // + 연산자를 재정의 
    Complex tmp;                                        // + 연산을 진행한 값을 저장하기 위한 변수 선언
    tmp.real = this -> real + op2.real;            // Complex 클래스의 첫번째 피연산자와 두번째 피연산자의 실수부를 합해서 저장
    tmp.img = this -> img + op2.img;                // Complex 클래스의 첫번째 피연산자와 두번째 피연산자의 허수부를 합해서 저장
    return tmp;                                    // 합한 결과를 저장한 tmp 반환
}

int main()
{
    Complex x(2,3), y(-5, 10), sum;                // x, y, sum 객체 생성
    sum = x + y;                                   // sum은 x와 y를 위에서 재정의한 연산자로 연산한 객체로 저장 -> x + y는 x.operator+ (y)와 같음
    cout << "두 복소수의 합은 ";
    sum.show();                                    // sum에 저장된 실수부와 허수부의 값을 출력
    return 0;
}
