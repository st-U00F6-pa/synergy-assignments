#include "main.hpp"

int main() {
	
	// writing numbers out one by one causes the program to be very slow
	std::string number_string = "";

	for (int i = 1000000; i <= 2000000; i++) {

		number_string += std::to_string(i) + " ";
	}
	write(number_string);
}