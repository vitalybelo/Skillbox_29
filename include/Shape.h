#pragma once
#include <iostream>

struct BoundBoxDimensions {
    double width;
    double height;
};

class Shape {
public:
    virtual double square() = 0;
    virtual BoundBoxDimensions dimension() = 0;
    virtual std::string getType() = 0;
    static void printShape(Shape* shape);
};
