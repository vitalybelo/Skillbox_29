#pragma once
#include <iostream>
#include <vector>
#include "Swimming.h"
#include "Counting.h"
#include "Dancing.h"

class Dog {
private:
    std::string name = "My pet";
    std::vector<Talents*> abilities;

public:
    explicit Dog(const std::string &name);

    void clearAbilities();
    bool addAbility(Talents* ability);
    void show_talent();
};
