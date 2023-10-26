#include "main.hpp"

template<typename T>
void write(T value) {
	
	std::cout << value << std::endl;
}

void write() {

	std::cout << "" << std::endl;
}

template<typename T>
void read(T& variable) {

	std::cin >> variable;
}

int main() {
	
	// variable definitions
	int first;
	int second;
	int third;

	// data input
	write("Enter a number: (1/3)");
	read(first);
	
	write("Enter a number: (2/3)");
	read(second);
	
	write("Enter a number: (3/3)");
	read(third);

	// checking if there are no equal numbers
	if (first != second && second != third && first != third) {
		
		write("No equal numbers entered");
		return 0;
	}

	// incrementing by five
	first += 5;
	second += 5;
	third += 5;

	// data output
	write(std::string("First number: ") + std::to_string(first));
	write(std::string("Second number: ") + std::to_string(second));
	write(std::string("Third number: ") + std::to_string(third));
}