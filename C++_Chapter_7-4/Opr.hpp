#ifndef _OPR_HPP_
#define _OPR_HPP_

class Complex {
    int real;
    int img;
public:
    Complex(int real, int img);
    void show();
    Complex& operator++ ();
    Complex operator-- (int x);
};

#endif