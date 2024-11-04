#include <iostream>                  // C++에서 입출력 표준 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;                 // C++에서 표준 라이브러리의 모든 이름을 사용하기 위한 구문

class Book {                         // 클래스 Book 선언
	string name;                 // 이름을 저장할 멤버 변수 선언
	int price;                   // 가격을 저장할 멤버 변수 선언
	int page;                    // 페이지 수를 저장할 멤버 변수 선언
public:
	Book(string name = {}, int price = 0, int page = 0) {                 // Book 클래스 객체의 생성자 정의
		this->name = name, this->price = price, this->page = page;
	}
	void show();                      // 결과 출력을 위한 show() 함수 선언
	Book& operator+=(int op1);        // +=연산의 재정의를 위한 선언
	Book& operator-=(int op1);        // -=연산의 재정의를 위한 선언
};

void Book::show() {                       // 결과 출력 함수 show() 정의
	cout << name << " " << price << "원 " << page << " 페이지" << endl;
}

Book& Book::operator+=(int op1) {              // += 연산자를 재정의
	this->price = this->price + op1;
	return *this;                          // 연산 후의 객체를 반환
}

Book& Book::operator-=(int op1) {              // -= 연산자를 재정의
	this->price = this->price - op1;
	return *this;                          // 연산 후의 객체를 반환
}

int main(void)
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);        // Book 클래스의 객체 a, b 생성
	a += 500;                                   // 객체 a에 += 연산 수행
	b -= 500;                                   // 객체 b에 -= 연산 수행
	a.show();                                   // 연산 수행 후 객체 a 출력
	b.show();                                   // 연산 수행 후 객체 b 출력
}
