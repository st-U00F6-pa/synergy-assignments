#include "main.hpp"

int main() {
	
	std::string name;

	writeln("Please enter your name below:");
	readln(name);

	std::ofstream greeting_file_output("greeting.txt");
	
	if (greeting_file_output.is_open()) {
		
		greeting_file_output << ("Welcome, " + name);
	}

	greeting_file_output.close();

	std::ifstream greeting_file_input("greeting.txt");
	
	if (greeting_file_input.is_open()) {
		
		std::string greeting;
		getline(greeting_file_input, greeting);
		
		writeln(greeting);
	}
}