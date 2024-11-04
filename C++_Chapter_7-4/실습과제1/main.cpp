#include <iostream>           // C++에서 입출력 표준 라이브러리를 사용하기 위한 헤더 파일 포함
#include "Opr.hpp"            // 같은 디렉터리 내에서 만든 헤더 파일 포함
using namespace std;            // C++에서 표준 라이브러리의 모든 이름을 사용하기 위한 구문

int main() {
	Complex x(2, 3);        // Complex 클래스의 객체 x 생성
	++x;                    // 전위 증가 연산 수행
	cout << "증가결과";       
	x.show();               // 연산 후 결과 출력
	x--;                    // 후위 감소 연산 수행
	cout << "감소결과";
	x.show();               // 연산 후 결과 출력
}
