#include "main.hpp"

int main() {
	
	std::vector<int> numbers(10);

	writeln("Enter ten integer numbers below:");

	for (int i = 0; i < 10; i++) {

		int number;
		read(number);
		numbers[i] = number;
	}

	std::sort(numbers.begin(), numbers.end());

	writeln("The sorted numbers are:");
	
	write("[ ");
	for (int i = 0; i < 10; i++) {

		write(numbers[i]);
		if (i != 9) write(", ");
	}
	write(" ]");
}