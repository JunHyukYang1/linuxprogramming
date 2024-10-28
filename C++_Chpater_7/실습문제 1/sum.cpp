#include <iostream>
#include "sum.hpp"
using namespace std;

Complex::Complex(int real, int img, bool print_message) {
	this->real = real, this->img = img;
	if(print_message)
		cout << "복소수 " << real << "+" << img << "j 생성" << endl;
}
Complex::Complex() {
	this->real = 0, this->img = 0;
	cout << "복소수 0+0j 생성" << endl;
}
Complex ComplexAdd(Complex x, Complex y) {
	return Complex(x.real + y.real, x.img + y.img, false);
}
void Complex::show() {
	cout << real << "+" << img << "j" << endl;
}