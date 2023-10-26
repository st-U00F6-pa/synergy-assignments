#include "main.hpp"

int main() {
	
	srand(time(0));

	const int array_size = 100;
	int numbers[array_size] = { 0 };

	for (int i = 0; i < array_size; i++) {
	
		numbers[i] = rand();
	}

	int even_numbers_counter = 0;
	int odd_numbers_counter = 0;

	for (int i = 0; i < array_size; i++) {

		if (numbers[i] % 2 == 0) even_numbers_counter++;
		else odd_numbers_counter++; 
	}

	if (even_numbers_counter == odd_numbers_counter) {

		writeln("The numbers are:");
		for (int i = 0; i < array_size; i++) {

			write(numbers[i]); write(" ");
		}
	}
	else if (even_numbers_counter >= odd_numbers_counter) {

		writeln("The even numbers are:");
		for (int i = 0; i < array_size; i++) {

			if (numbers[i] % 2 != 0) continue;
			write(numbers[i]); write(" ");
		}
	}
	else {

		writeln("The odd numbers are:");
		for (int i = 0; i < array_size; i++) {

			if (numbers[i] % 2 == 0) continue;
			write(numbers[i]); write(" ");
		}
	}
}