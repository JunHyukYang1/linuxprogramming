#ifndef _SUM_HPP_
#define _SUM_HPP_

class Complex {
    int real;
    int img;
    int sum_real;
    int sum_img;
public:
    Complex(int real, int img, bool print_message = true);
    Complex();
    void show();
    friend Complex ComplexAdd(Complex x, Complex y);
};

Complex ComplexAdd(Complex x, Complex y);

#endif