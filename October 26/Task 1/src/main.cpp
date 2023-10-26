#include "main.hpp"

int main() {
	
	// variable definitions
	int first;
	int second;
	int third;

	// data input
	writeln("Enter a number: (1/3)");
	read(first);
	
	writeln("Enter a number: (2/3)");
	read(second);
	
	writeln("Enter a number: (3/3)");
	read(third);

	// checking if there are no equal numbers
	if (first != second && second != third && first != third) {
		
		writeln("No equal numbers entered");
		return 0;
	}

	// incrementing by five
	first += 5;
	second += 5;
	third += 5;

	// data output
	write("First number: "); writeln(first);
	write("Second number: "); writeln(second);
	write("Third number: "); writeln(third);
}