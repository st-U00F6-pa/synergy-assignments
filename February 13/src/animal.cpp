#include "animal.hpp"

animal::animal(int age, std::string species) {

    (*this).age = age;
    (*this).species = species;
}