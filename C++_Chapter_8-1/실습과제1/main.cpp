#include <iostream>
#include "Shape.hpp"
using namespace std;

int main() {
    Circle x; Rect y; Triangle z;
    x.setCircle(0, 0, 2);
    y.setRect(1, 1, 5, 10);
    z.setTriangle(2, 2, 3, 4);
    x.show(); y.show(); z.show();
}