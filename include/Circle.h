#pragma once
#include <iostream>
#include "Shape.h"

class Circle : virtual public Shape {
private:
    double radius = 0;
    std::string type = "Circle";

public:
    explicit Circle(double radius);

    double square() override;
    BoundBoxDimensions dimension() override;
    std::string getType() override;

};
