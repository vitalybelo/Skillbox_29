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

    cout << endl;
    dog.addAbility(SWIM);
    dog.addAbility(SWIM);
    dog.addAbility(DANCE);
    dog.showAbilities();

    cout << endl;
    dog.clearAbilities();
    dog.showAbilities();

    cout << endl;

}
