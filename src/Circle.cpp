#include <cmath>
#include "Circle.h"

Circle::Circle(double radius) {
    this->radius = radius;
}

double Circle::square() {
    return 3.14159 * pow(radius, 2);
}

BoundBoxDimensions Circle::dimension() {
    BoundBoxDimensions dimensions{};
    dimensions.width = 2 * radius;
    dimensions.height = 2 * radius;
    return dimensions;
}

std::string Circle::getType() {
    return this->type;
}
