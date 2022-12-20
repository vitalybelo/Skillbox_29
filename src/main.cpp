#include "solutions.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() {

    /**
     * Создаем обычную собаку, с обычным интерфейсом updates
     * сейчас реализованы 3 модификации: плавание, танцы, счет на пальцах
     * также, реализована возможность обнуления способностей, для безопасности
     * в следующей версии добавим: стрижка ногтей, рукоделие, чтение, игра на балалайке
     * Ф.Ф.Персиков-Преображенский...
     */
    //solution_1();

    cout << endl;
    Circle circle(7);
    Circle::printShape(&circle);

    Rectangle rectangle(4,6);
    Shape::printShape(&rectangle);

    Triangle triangle(3,4,5);
    Triangle::printShape(&triangle);

    return 0;
}
