#include "main.hpp"

int main() {

	int number = 0;

	while (true) {

		writeln("enter a number:");
		read(number);
		write("the number you entered is "); writeln(number);

		if (number == 0) break;
	}
}