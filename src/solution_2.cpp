#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

/**
 * реализован абстрактный класс Shape с 3-мя пустыми виртуальными методами и одним статическим
 * На основе класса Shape реализованы классы Circle, Rectangle, Triangle - с методами override
 * Метод отображения результатов реализован в классе Shape, ему передается указатель на дочерний
 * объект класса Shape.
 */
void solution_2() {

    cout << "\n\n************* SOLUTION 2 **************\n\n";
    Circle circle(2);
    Circle::printShape(&circle);

    Rectangle rectangle(4,6);
    Shape::printShape(&rectangle);

    Triangle triangle(3,4,5);
    Shape::printShape(&triangle);

}