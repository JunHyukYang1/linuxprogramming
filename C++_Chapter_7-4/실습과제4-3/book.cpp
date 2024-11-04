#include <iostream>               // C++에서 입출력 표준 라이브러리를 사용하기 위한 헤더 파일 포함
using namespace std;              // C++에서 표준 라이브러리의 모든 이름을 사용하기 위한 구문

class Book {                      // 클래스 Book 선언
	string name;              // 이름을 저장할 멤버 변수 선언
	int price;                // 가격을 저장할 멤버 변수 선언
	int page;                 // 페이지 수를 저장할 멤버 변수 선언
public:
	Book(string name = {}, int price = 0, int page = 0) {                         // Book 클래스 객체의 생성자 정의
		this->name = name, this->price = price, this->page = page;
	}
	bool operator! ();                        // !연산자의 재정의를 위한 선
};

bool Book::operator! () {                   // ! 논리연산자의 재정의
	return this->price == 0;            // 수식이 참일 시 true 반환
}

int main(void)
{
	Book book("벼룩시장", 0, 50);               // Book 클래스의 객체 book 생성
	if (!book) cout << "공짜다" << endl;        // 재정의한 ! 논리 연산을 수행하여 조건이 참일 시 결과 출력
}
