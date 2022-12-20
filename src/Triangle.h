#pragma once
#include "Shape.h"
#include <iostream>

class Triangle : public Shape {
private:
    std::string type = "Triangle";
    double sideA = 0;
    double sideB = 0;
    double sideC = 0;

public:
    Triangle(double sideA, double sideB, double sideC);

    double square() override;
    BoundBoxDimensions dimension() override;
    std::string getType() override;

};
