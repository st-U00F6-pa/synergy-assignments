#include "animal.hpp"

animal::animal(int age, std::string species) {

    (*this).age = age;
    (*this).species = species;
}
void animal::print() {

    write("Animal's age: "); writeln((*this).age);
    write("Animal's species: "); writeln((*this).species);
}
void animal::birthday(int number) {

    (*this).age += number;
    (*this).print();
}