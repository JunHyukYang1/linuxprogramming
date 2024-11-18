#include <iostream>                          // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;                         // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

template <class T1, class T2>                // 템플릿 클래스 선언, 템플릿 매개변수 T1, T2 2개
class GClass{
    T1 data1;                                // private 멤버 변수 data1;
    T2 data2;                                // private 멤버 변수 data2;
public:
    GClass();                                // GClass 생성자 선언
    void set(T1 a, T2 b);                    // 멤버 변수에 각각 값을 저장하는 멤버 함수 선언
    void get(T1& a, T2& b);                  // 멤버 변수에 저장된 값을 참조하여 반환하기 위한 멤버 함수 선언
    void swap();                             // 멤버 변수에 저장된 값을 서로 바꾸기 위한 멤버 함수 선언
};

template <class T1, class T2>
GClass<T1, T2>::GClass() { data1 = 0, data2 = 0; }                     // GClass 생성자 정의

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) { data1 = a, data2 = b; }         // data1 에는 a를 저장, data2에는 b를 저장하는 함수 정의

template <class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) { a = data1, b = data2; }       // 멤버 변수 data1과 data2에 저장된 값을 참조형 변수 a와 b에 저장하여 반환

template <class T1, class T2>
void GClass<T1, T2>::swap() {                                          // 각 멤버 변수에 저장된 값을 서로 바꾸는 함수 정의
    T1 tmp;                                                            // data1에 저장된 값을 저장하기 위한 변수 선언
    tmp = data1;                                                       // tmp 변수에 data1의 값을 저장
    data1 = data2;                                                     // data1에 data2의 값을 저장
    data2 = tmp;                                                       // data2에 이전 data1에 저장되어 있던 값 저장
}

int main() {
    int a, b;                                                          // get()함수에서 사용하기 위한 변수 선언
    GClass<int, int> x;                                                // GClass 클래스의 객체 x 생성, 템플릿 매개변수의 타입은 int
    x.set(2, 5);                                                       // 객체 x의 멤버 변수에 값 저장
    x.get(a, b);                                                       // 객체 x의 멤버 변수에 저장된 값들을 반환
    cout << "a = " << a << '\t' << "b = " << b << endl;                // get()함수에서 반환한 값들을 출력
    x.swap();                                                          // 객체 x의 멤버 변수끼리 서로 값을 바꿈
    x.get(a, b);                                                       // 바꾼 후 멤버 변수에 저장된 값들을 반환
    cout << "a = " << a << '\t' << "b = " << b << endl;                // 위에서 반환한 값들을 출력

    double c, d;                                                       // get()함수에서 사용하기 위한 변수 선언
    GClass<double, double> y;                                          // GClass 클래스의 객체 x 생성, 템플릿 매개변수의 타입은 double
    y.set(3.14, 6.28);                                                 // 객체 y의 멤버 변수에 값 저장
    y.get(c, d);                                                       // 객체 y의 멤버 변수에 저장된 값들을 반환
    cout << "c = " << c << '\t' << "d = " << d << endl;                // get()함수에서 반환한 값들을 출력
    y.swap();                                                          // 객체 y의 멤버 변수끼리 서로 값을 바꿈
    y.get(c, d);                                                       // 바꾼 후 멤버 변수에 저장된 값들을 반환
    cout << "c = " << c << '\t' << "d = " << d << endl;                // 위에서 반환한 값들을 출력
}
