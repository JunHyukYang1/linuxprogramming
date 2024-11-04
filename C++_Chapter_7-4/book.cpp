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
	bool operator! ();
};

bool Book::operator! () {
	return this->price == 0;
}

int main(void)
{
	Book book("∫≠∑ËΩ√¿Â", 0, 50);
	if (!book) cout << "∞¯¬•¥Ÿ" << endl;
}