#include "solutions.h"

int main() {

    /**
     * Создаем обычную собаку, с обычным интерфейсом updates
     * сейчас реализованы 3 модификации: плавание, танцы, счет на пальцах
     * также, реализована возможность обнуления способностей, для безопасности
     * в следующей версии добавим: стрижка ногтей, рукоделие, чтение, игра на балалайке
     * Ф.Ф.Персиков-Преображенский...
     */
    solution_1();

    /**
     * реализован абстрактный класс Shape с 3-мя пустыми виртуальными методами и одним статическим
     * На основе класса Shape реализованы классы Circle, Rectangle, Triangle - с методами override
     * Метод отображения результатов реализован в классе Shape, ему передается указатель на дочерний
     * объект класса Shape.
     */
    solution_2();

    return 0;
}
