#include "sum.hpp"
#include <iostream>
using namespace std;

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    sum = ComplexAdd(x, y);
    cout << "두 복소수의 합은";
    sum.show();
    return 0;
}