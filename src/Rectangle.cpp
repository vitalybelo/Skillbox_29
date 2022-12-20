#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) {
    this->width = width;
    this->height = height;
}

double Rectangle::square() {
    return width * height;
}

BoundBoxDimensions Rectangle::dimension() {
    BoundBoxDimensions dimensions{};
    dimensions.width = width;
    dimensions.height = height;
    return dimensions;
}

std::string Rectangle::getType() {
    return type;
}
