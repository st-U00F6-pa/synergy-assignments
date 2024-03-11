#pragma once
#include <string>
#include "write_read.hpp"

class animal {

    int age;
    
public:

    std::string species;

    animal(int age, std::string species);
    void print();
    void birthday(int number);
};