#pragma once
#include <iostream>
#include <vector>
#include "Swimming.h"
#include "Counting.h"
#include "Dancing.h"

#define TALENT_NUMBERS 3
enum Ability { SWIM = 0, DANCE, COUNT};

class Dog :
        virtual public Swimming,
        virtual public Counting,
        virtual public Dancing {

private:
    std::string name = "My pet";
    std::vector<Ability> abilities;

public:
    explicit Dog(const std::string &name);

    void clearAbilities();
    bool addAbility(Ability ability);
    void showAbilities();
};
