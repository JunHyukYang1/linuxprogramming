#include <iostream>                   // C++에서 표준 입출력 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;                  // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

template <class T>                    // 템플릿 클래스 선언, 템플릿 매개변수는 T 1개
class Container{
    T* p;                             // private 멤버 변수 p를 포인터로 선언
    T size;                           // 배열의 크기를 저장히기 위한 private 멤버 변수 size 선언
public:
    Container(int n);                 // Container 클래스의 생성자 선언
    ~Container();                     // Container 클래스의 소멸자 선언
    void set(int index, T value) { p[index] = value; }          // 배열 p에 값을 저장히기 위한 멤버 함수 선언 및 정의
    T get(int index);                                           // 배열에 저장된 값을 반환하기 위한 멤버 함수 선언
};

template <class T>
Container<T>::Container(int n) {               // Container 클래스의 생성자 정의
    size = n;                                  // 멤버 변수 size를 초기화
    p = new T[size];                           // 포인터로 선언한 p에 동적 배열 할당
}

template <class T>
Container<T>::~Container() {                   // Container 클래스의 소멸자 정의
    delete[] p;                                // 배열 p 삭제
};

template <class T>
T Container<T>::get(int index) { return p[index]; }         // 배열 p에 저장된 값 중 p[index] 값을 반환

int main() {
    Container<char> c(26);                                  // Container 클래스의 객체 c 생성, size는 26으로 초기화
    for(int i = 0; i < 26; i++)                             // 배열 p에 알파벳 a ~ z까지 순서대로 저장
        c.set(i, 'a' + i);
    for(int i = 25; i >= 0; i--)                            // 배열 p에 저장된 값들의 순서를 반대로 하여 출력
        cout << c.get(i);
    cout << endl;
}
