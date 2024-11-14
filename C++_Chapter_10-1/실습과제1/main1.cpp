#include <iostream>        // 표준 입출력 라이브러리 사용을 위한 헤더 파일 포함
using namespace std;        // 모든 이름의 표준 라이브러리를 사용하기 위한 구문

template <class T>               // 템플릿 함수 정의, T : 템플릿 매개변수
T getmax(T data[], int n) {        // 템플릿 매개변수를 이용해 여러 자료형의 함수를 정의
    T MaxValue = data[0];             // 최대값 초기값 저장
    for(int i = 1; i < n; i++) {
        if(data[i] > MaxValue)  MaxValue = data[i];       // 저장된 최대값보다 배열의 값이 클 경우 갱신
    }
    return MaxValue;         // 최대값 반환
}

int main() {
    int a[5] = {-5, 10, 30, 20, 6};       // int 자료형 배열
    double b[4] = {3.14, 1.5, -6.0, 0.5};        // double 자료형 배열
    char c[3] = {'a', 'x', 'p'};            // char 자료형 배열

    cout << "정수배열의 최대값은 " << getmax<int>(a, 5) << endl;        // 정수배열 출력, getmax함수에 어떤 템플릿 매개변수가 쓰였는지 명시적으로 표기
    cout << "실수배열의 최대값은 " << getmax<double>(b, 4) << endl;        // 실수배열 출력, getmax함수에 어떤 템플릿 매개변수가 쓰였는지 명시적으로 표기
    cout << "문자배열의 최대값은 " << getmax<char>(c, 3) << endl;        // 문자배열 출력, getmax함수에 어떤 템플릿 매개변수가 쓰였는지 명시적으로 표기
}
