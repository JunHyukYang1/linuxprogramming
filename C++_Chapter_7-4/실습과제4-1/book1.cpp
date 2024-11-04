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
	void show();
	Book& operator+=(int op1);
	Book& operator-=(int op1);
};

void Book::show() {
	cout << name << " " << price << "¿ø " << page << "ÆäÀÌÁö" << endl;
}

Book& Book::operator+=(int op1) {
	this->price = this->price + op1;
	return *this;
}

Book& Book::operator-=(int op1) {
	this->price = this->price - op1;
	return *this;
}

int main(void)
{
	Book a("Ã»Ãá", 20000, 300), b("¹Ì·¡", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
