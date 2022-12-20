#include "Dog.h"

Dog::Dog(const std::string &name) {
    this->name = name;
}

void Dog::clearAbilities() {
    if (!abilities.empty()) abilities.clear();
}

bool Dog::addAbility(Ability ability) {
    if (ability > TALENT_NUMBERS - 1) return false;

    for (auto & abi : abilities) {
        if (abi == ability) return false;
    }
    abilities.push_back(ability);
    return true;
}

void Dog::showAbilities() {
    std::cout << "This is: " << name << " --> and it has a some talents:\n";
    if (abilities.empty()) {
        std::cout << "SORRY, NO MORE TALENTS";
    } else {
        for (auto &ability: abilities) {
            switch (ability) {
                case SWIM: this->swimming(); break;
                case DANCE: this->dancing(); break;
                case COUNT: this->counting(); break;
                default: std::cout << "Ops, exclusion happens";
            }
        }
    }
}


