#include <iostream>
using namespace std;

class Complex
{
    int real;                    // 멤버변수 실수부
    int img;                     // 멤버변수 허수부
public:
    Complex(int real = 0, int img = 0) {             // Complex 클래스의 기본 생성자 정의
        this -> real = real, this -> img = img;
    }
    Complex operator* (Complex op2);                 // 곱셈 연산자 재정의를 위한 선언
    void show();                                     // 결과를 출력하기 위한 멤버함수
};

void Complex::show() {                              // show() 함수 정의
    cout << real << "+" << img << "j" << endl;           // 'real' + 'img'j 와 같이 출력
}

Complex Complex::operator* (Complex op2) {                     // 객체 끼리의 곱셈 연산을 재정의
    Complex tmp;                                                        // 연산후 값을 저장하기위한 객체 tmp 생성
    tmp.real = this -> real * op2.real - this -> img * op2.img;            // 복소수의 곱셈에서 실수부끼리의 곱과 허수부끼리의 곱의 합이 tmp의 실수부가 됨
    tmp.img = this -> img * op2.real + this -> real * op2.img;             // 복소수의 곱셈에서 실수부와 허수부를 곱한 것들끼리의 합이 tmp의 허수부가 됨
    return tmp;                                                      // 연산 결과를 저장한 tmp 반환
}

int main()
{
    Complex x(2,3), y(-5, 10), sum;                 // x, y, sum 객체 생성
    sum = x * y;                                   // sum은 복소수 취급한 객체 x와 y를 곱셈 연산한 결과
    cout << "두 복소수의 곱은 ";
    sum.show();                                   // sum에 저장된 복소수의 출력
    return 0;
}
