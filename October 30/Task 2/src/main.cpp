#include "main.hpp"

int main() {

	std::string response;

	while (true) {

		writeln("Почему?");
		readln(response);
		if (response == "потому что" || response == "Потому что") return 0;
	}
}