#include <iostream>
using namespace std;

class Book {
	string name;
	int price;
	int page;
public:
	Book(string name = {}, int price = 0, int page = 0) {
		this->name = name, this->price = price, this->page = page;
	}
	friend bool operator==(Book& op1, int op2);
	friend bool operator==(Book& op1, string op2);
	friend bool operator==(Book& op1, Book& op2);
};

bool operator==(Book& op1, int op2) {
	return op1.price == op2;
}

bool operator==(Book& op1, string op2) {
	return op1.name == op2;
}

bool operator==(Book& op1, Book& op2) {
	return op1.name == op2.name && op1.price == op2.price
		&& op1.page == op2.page;
}

int main(void)
{
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;
}
