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
	Book book("벼룩시장", 0, 50);
	if (!book) cout << "공짜다" << endl;
}
