#pragma once // why not header guards?
#include <string>
#include "write_read.hpp"

class animal {

    // I see no reason for any of the properties to be private

public:

    int age;
    std::string name;
    std::string species;

    animal();
    animal(std::string name, std::string species);
    animal(int age, std::string name, std::string species);

    bool compareAge(int age);
    bool compareAge(const animal& a);
    void print();
};