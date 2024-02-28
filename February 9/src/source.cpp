#include "source.hpp"

int main() {
	
    std::vector<animal> animals {
        {
            20,
            600.0,
            "cow"
        }, {
            12,
            100.0,
            "pig"
        }, {
            25,
            120.0,
            "sheep"
        }, {
            7,
            4.0,
            "chicken"
        }, {
            25,
            500.0,
            "horse"
        }
    };

    writeln("Names of animals in order:")
    for (int i = 0; i < animals.size(); i++) {
        
        writeln(animals[i].species);
    }

    writeln("Current weight of an animal number 3:");
    writeln(animals[2].weight);

    animals[2].weight += 1;

    writeln("Current weight of an animal number 3:");
    writeln(animals[2].weight);
}