#include "Shape.h"

void Shape::printShape(Shape *shape) {
    std::cout << "TYPE :: " << shape->getType() << " ::";
    std::cout << " SQUARE = " << shape->square() << " ::";
    std::cout << " BOUND DIMENSIONS:";
    std::cout << " width = " << shape->dimension().width << ",";
    std::cout << " height = " << shape->dimension().height << std::endl;
}

