#include "main.hpp"

int main() {
	
	std::string target_string;
	std::string source_string;
	
	writeln("Enter a string to insert into");
	read(target_string);
	writeln("Enter a string to insert");
	read(source_string);

	int length = target_string.length();
	target_string.insert(length / 2, source_string);

	writeln(target_string);
}