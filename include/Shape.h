#pragma once
#include <iostream>

class Shape {
protected:
    std::string name = "Shape";

public:
    Shape();
    explicit Shape(const std::string &name);

    const std::string &getName() const;
    void setName(const std::string &name);
    virtual double square() = 0;
    virtual double boundBoxDimension() = 0;
    virtual std::string getType() = 0;
    static void print(Shape* shape);
};
