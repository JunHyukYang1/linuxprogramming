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

Complex& Complex::operator++() {
    real++;
    img++;
    return *this;
}

Complex Complex::operator--(int x) {
    Complex tmp = *this;
    real--;
    img--;
    return tmp;
}