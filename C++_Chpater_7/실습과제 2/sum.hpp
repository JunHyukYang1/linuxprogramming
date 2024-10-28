#ifndef _SUM_HPP_
#define _SUM_HPP_

class Complex;
class ComplexManager {
public:
    Complex ComplexAdd(Complex x, Complex y);
};

class Complex {
    int real;
    int img;
public:
    Complex(int real, int img, bool print_message = true);
    Complex();
    void show();
    friend Complex ComplexManager::ComplexAdd(Complex x, Complex y);
};

#endif