#include "animal.hpp"

animal::animal(int age, std::string name, std::string species) {

    (*this).age = age;
    (*this).name = name;
    (*this).species = species;
}
animal::animal(std::string name, std::string species) {

    (*this).age = 0;
    (*this).name = name;
    (*this).species = species;
}
animal::animal() {

    (*this).age = 0;
    (*this).species = "N/A";
    (*this).name = "N/A";
}

bool animal::compareAge(int age) {

    return (*this).age > age;
}
bool animal::compareAge(const animal& a) {

    return (*this).age > a.age;
}
void animal::print() {

    write((*this).name); write(" is a "); writeln((*this).species);
    write((*this).name); write("'s age is "); writeln((*this).age);
}