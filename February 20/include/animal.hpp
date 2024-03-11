#pragma once
#include <string>
#include "write_read.hpp"

class animal {

    int age;
    
public:

    std::string species;

    animal();
    animal(std::string species);
    animal(int age, std::string species);

    bool compareAge(int age);
    bool compareAge(animal a);
};