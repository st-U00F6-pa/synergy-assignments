#include "main.hpp"

int main() {
	
	bool program_terminated = false;

	do {

		writeln("Enter an empty string to stop the program");
		writeln("Enter the message to encode below:")

		std::string message;
		readln(message);

		if (message == "") {
			program_terminated = true;
		}
		else {

			std::string encoded_message = encode_string(message);

			writeln(encoded_message);
		}

	} while (!program_terminated);
}