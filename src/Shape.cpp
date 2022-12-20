#include "Shape.h"

Shape::Shape(const std::string &name) {
    this->name = name;
}

Shape::Shape() = default;

const std::string &Shape::getName() const {
    return name;
}

void Shape::setName(const std::string &name) {
    this->name = name;
}

void Shape::print(Shape *shape) {
    std::cout << "TYPE :: " << shape->getType() << std::endl;
}

