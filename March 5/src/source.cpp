#include "source.hpp"

int main() {
	
    std::vector<animal> animals {

        animal(11, "miguel", "cow"),
        animal(13, "eduardo", "cow"),
        animal(9, "emmanuel", "cow"),
        animal(7, "juan", "cow"),
        animal(8, "gabriel", "cow")
    };

    animals[3].print();
    animals[3].compareAge(5);
    animals[3].compareAge(animals[4]);

    for (int i = 0; i < animals.size(); i++) {
        
        info(animals[i]);
    }
}