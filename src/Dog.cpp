#include "Dog.h"

Dog::Dog(const std::string &name) {
    this->name = name;
}

void Dog::clearAbilities() {
    if (!abilities.empty()) abilities.clear();
    if (abilities.capacity() > 0) abilities.shrink_to_fit();
}

bool Dog::addAbility(Talents* ability) {
    if (ability != nullptr) {
        abilities.push_back(ability);
        return true;
    }
    return false;
}

void Dog::show_talent() {
    std::cout << "This is: " << name << " --> and it has a some talents:\n";
    if (abilities.empty()) {
        std::cout << "SORRY, NO MORE TALENTS";
    } else {
        for (auto &ability: abilities) {
            ability->show_talent();
        }
    }
}

Dog::~Dog() {
    // заменяем содержимое вектора на пустой вектор - обнулили
    std::vector<Talents*>().swap(abilities);
}


