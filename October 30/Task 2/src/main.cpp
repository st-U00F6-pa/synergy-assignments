#include "main.hpp"

int main() {

	std::string response = "";

	while (response != "потому что" && response != "Потому что") {

		writeln("Почему?");
		readln(response);
	}
}