#include "source.hpp"

int main() {
	
    std::vector<animal> animals {
        animal(15, "cow"),
        animal(16, "cow"),
        animal(19, "cow"),
    };
    // They're all cows of different age

    for (int i = 0; i < animals.size(); i++) {

        animals[i].print();
    }
}