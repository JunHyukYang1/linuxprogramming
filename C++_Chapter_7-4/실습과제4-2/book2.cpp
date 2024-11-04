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
	friend Book& operator+=(Book& op1, int op2);
	friend Book& operator-=(Book& op1, int op2);
};

void Book::show() {
	cout << name << " " << price << "¿ø " << page << "ÆäÀÌÁö" << endl;
}

Book& operator+=(Book& op1, int op2) {
	op1.price += op2;
	return op1;
}

Book& operator-=(Book& op1, int op2) {
	op1.price -= op2;
	return op1;
}

int main(void)
{
	Book a("Ã»Ãá", 20000, 300), b("¹Ì·¡", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
