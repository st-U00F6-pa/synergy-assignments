#include "main.hpp"

int main() {

	int number = 1;

	while (number != 0) {

		writeln("enter a number:");
		read(number);
		write("the number you entered is "); writeln(number);
	}
}