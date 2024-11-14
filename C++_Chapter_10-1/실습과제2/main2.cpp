#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() { return radius; }
    bool operator> (Circle a);
};

bool Circle::operator> (Circle a) {
    if(this->radius > a.radius) return true;
    else    return false;
}

template <class T>
T bigger(T a, T b) {
    if (a > b)  return a;
    else    return b;
}

int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << "20과 50중 큰 값은 " << c << endl;

    Circle donut(10), pizza(20), y;
    y = bigger(donut, pizza);
    cout << "dount과 pizza 중 큰 반지름은 " << y.getRadius() << endl;
}