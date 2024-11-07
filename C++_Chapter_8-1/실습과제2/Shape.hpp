#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_

class Shape {
protected:
    int x, y;
};

class Circle : public Shape {
    int r;
public:
    void setCircle(int x, int y, int r);
    void show();
};

class Rect : public Shape {
    int width, height;
public:
    void setRect(int x, int y, int width, int height);
    void show();
};

class Triangle : public Shape {
    int base, height;
public:
    void setTriangle(int x, int y, int base, int height);
    void show();
};

#endif