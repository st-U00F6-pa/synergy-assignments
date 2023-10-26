#include "main.hpp"

int main() {
	
	std::string input_string;
	
	writeln("Enter a string to search");
	read(input_string);

	if (input_string.find("сон") != std::string::npos) {
		writeln("The string contains \"сон\"");
	} else {
		writeln("The string doesn't contain \"сон\"");
	}
}