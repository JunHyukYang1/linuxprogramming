#include <iostream>
#include "Mul.hpp"
using namespace std;

int main() {
    Power a(3, 5), b;
    a.show();
    b.show();
    b = 2 * a;
    a.show();
    b.show();
}
