#ifndef _MUL_HPP_
#define _MUL_HPP_

class Power {
    int kick;
    int punch;
public:
    Power();
    Power(int kick, int punch);
    void show();
    friend Power operator*(int op1, Power op2);
};

#endif