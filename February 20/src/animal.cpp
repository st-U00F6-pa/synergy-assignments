#include "animal.hpp"


animal::animal(int age, std::string species) {

    (*this).age = age;
    (*this).species = species;
}
animal::animal(std::string species) {

    (*this).age = 0;
    (*this).species = species;
}
animal::animal() {

    (*this).age = 0;
    (*this).species = "N/A";
}

bool animal::compareAge(int age) {

    return (*this).age > age;
}
bool animal::compareAge(animal a) {

    return (*this).age > a.age;
}