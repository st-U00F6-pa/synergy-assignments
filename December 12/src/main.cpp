#include "main.hpp"

int main() {
	
	int first_number;
	int second_number;

	writeln("Enter the first number");
	read(first_number);

	writeln("Enter the second number");
	read(second_number);

	write("The sum of the numbers is ");
	writeln(sum(first_number, second_number));
}