#include <iostream>                  // C++에서 입출력 표준 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;                 // C++에서 표준 라이브러리의 모든 이름을 사용하기 위한 구문

class Book {                         // 클래스 Book 선언
	string name;                 // 이름을 저장할 멤버 변수 선언
	int price;                   // 가격을 저장할 멤버 변수 선언
	int page;                    // 페이지 수를 저장할 멤버 변수 선언
public:
	Book(string name = {}, int price = 0, int page = 0) {                         // Book 클래스 객체의 생성자 정의
		this->name = name, this->price = price, this->page = page;
	}
	friend bool operator==(Book& op1, int op2);               // 객체와 정수 간 == 연산의 재정의를 위한 프렌드 함수 선언
	friend bool operator==(Book& op1, string op2);            // 객체와 문자열 간 == 연산의 재정의를 위한 프렌드 함수 선언
	friend bool operator==(Book& op1, Book& op2);             // 객체와 객체 간 == 연산의 재정의를 위한 프렌드 함수 선언
};

bool operator==(Book& op1, int op2) {             // 객체와 정수 간 == 연산 재정의, 전역 함수
	return op1.price == op2;                  // return 안의 수식이 참일 시 true 반환
}

bool operator==(Book& op1, string op2) {          // 객체와 문자열 간 == 연산 재정의, 전역 함수
	return op1.name == op2;                   // return 안의 수식이 참일 시 true 반환
}

bool operator==(Book& op1, Book& op2) {                          // 객체와 객체 간 == 연산 재정의
	return op1.name == op2.name && op1.price == op2.price
		&& op1.page == op2.page;                         // return 안의 수식이 참일 시 true 반환
}

int main(void)
{
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);        // Book 클래스의 객체 a, b 생성
	if (a == 30000) cout << "정가 30000원" << endl;                   // 재정의한 연산을 수행 하여 조건이 참일 시 결과 출력
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;          // 재정의한 연산을 수행 하여 조건이 참일 시 결과 출력
	if (a == b) cout << "두 책이 같은 책입니다." << endl;             // 재정의한 연산을 수행 하여 조건이 참일 시 결과 출력
}
