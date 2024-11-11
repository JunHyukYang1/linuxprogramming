#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_

class Shape {
    int x;
    int y;
public:
    Shape(int x, int y);
    void show();
    ~Shape();
};

class Circle : public Shape {
    int r;
public:
    Circle(int x, int y, int r);
    void show();
    ~Circle();
};

class Rect : public Shape {
    int width;
    int height;
public:
    Rect(int x, int y, int width, int height);
    void show();
    ~Rect();
};

class Triangle : public Shape {
    int base;
    int height;
public:
    Triangle(int x, int y, int base, int height);
    void show();
    ~Triangle();
};

#endif