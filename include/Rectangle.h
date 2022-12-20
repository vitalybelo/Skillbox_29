#pragma once
#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
private:
    std::string type = "Rectangle";
    double width = 0;
    double height = 0;

public:
    Rectangle(double width, double height);

    double square() override;
    BoundBoxDimensions dimension() override;
    std::string getType() override;

};
