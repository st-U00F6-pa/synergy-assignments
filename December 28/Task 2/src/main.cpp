#include "main.hpp"

int main() {
	
	int* numbers;
	int length;

	writeln("Enter the length of the array");

	read(length);
	numbers = new int[length];

	writeln("Enter the numbers of the array below:");

	for (int i = 0; i < length; i++) {

		int number;
		read(number);
		numbers[i] = number;
	}

	for (int i = 0; i < length; i++) {

		bool has_swapped = false;

		for (int j = 0; j < length - 1; j++) {
			
			if (numbers[j] > numbers[j + 1]) {
				
				swap(numbers[j], numbers[j + 1]);
				has_swapped = true;
			}
		}

		if (!has_swapped) break;
	}

	writeln("The sorted numbers are:");
	
	write("[ ");
	for (int i = 0; i < length; i++) {

		write(numbers[i]);
		if (i != length - 1) write(", ");
	}
	write(" ]");
}

void swap(int& a, int& b) {

	int c = a;
	a = b;
	b = c;
}