#include <iostream>
#include "Mul.hpp"
using namespace std;

Power::Power() {
    this->kick = 0, this->punch = 0;
}

Power::Power(int kick, int punch) {
    this->kick = kick, this->punch = punch;
}

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl; 
}

Power operator*(int op1, Power op2) {
    Power tmp;
    tmp.kick = op1 * op2.kick;
    tmp.punch = op1 * op2.punch;
    return tmp;
}