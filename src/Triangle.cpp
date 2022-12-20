#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double sideA, double sideB, double sideC) {
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
}

double Triangle::square() {
    double p = (sideA + sideB + sideC) / 2;
    double s = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    return s;
}

BoundBoxDimensions Triangle::dimension() {
    BoundBoxDimensions dimensions{};
    double p = (sideA + sideB + sideC) / 2;
    double s = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    double r = (sideA * sideB * sideC) / (4 * s);
    dimensions.width = 2 * r;
    dimensions.height = 2 * r;
    return dimensions;
}

std::string Triangle::getType() {
    return type;
}

