#include "Dog.h"
using namespace std;

/**
 * Создаем обычную собаку, с обычным интерфейсом для updates
 * сейчас реализованы 3 модификации: плавание, танцы, счет на пальцах
 * также, реализована возможность обнуления способностей, на всякий случай
 * в следующей версии добавим: стрижка ногтей, рукоделие, чтение журналов, игра на балалайке
 * Ф.Ф.Преображенский...
 */
void solution_1() {

    Dog dog("Wolfy");

    cout << "\n\n************* SOLUTION 1 **************\n\n";
    dog.addAbility(new Swimming());
    dog.addAbility(new Dancing());
    dog.show_talent();

    cout << endl;
    dog.clearAbilities();
    dog.show_talent();
    cout << endl;

    cout << endl;
    dog.addAbility(new Counting());
    dog.addAbility(new Swimming());
    dog.show_talent();
    cout << endl;

}
