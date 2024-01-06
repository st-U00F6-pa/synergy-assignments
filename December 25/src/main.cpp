#include "main.hpp"

int main() {
	
	std::map<std::string, int> grocery_list{};

	grocery_list["milk_ml"] = 2000;
	grocery_list["eggs"] = 10;
	grocery_list["cheese_g"] = 300;
	grocery_list["chicken_breasts"] = 4;
	grocery_list["sugar_g"] = 1000;

	for (auto [key, value] : grocery_list) {

		write("Grocery id: "); writeln(key);
		write("Grocery amount: "); writeln(value);
		writeln("");
	}

	grocery_list["lemons"] = 1;
	grocery_list["cola_ml"] = 330;
	
	for (auto [key, value] : grocery_list) {

		write("Grocery id: "); writeln(key);
		write("Grocery amount: "); writeln(value);
		writeln("");
	}
}