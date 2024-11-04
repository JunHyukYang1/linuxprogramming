#include <iostream>
#include "Opr.hpp"
using namespace std;

Complex::Complex(int real, int img) {
    this->real = real; this->img = img;
    cout << "복소수 " << real << "+" << img << "j 생성" << endl;
}

void Complex::show() {
    cout << real << "+" << img << "j" << endl;
}

Complex& operator++(Complex& op) {
    op.real++;
    op.img++;
    return op;
}

Complex operator--(Complex& op, int x) {
    Complex tmp = op;
    op.real--;
    op.img--;
    return tmp;
}