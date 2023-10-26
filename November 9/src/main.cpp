#include "main.hpp"

int main() {
	
	srand(time(0));

	const int array_size = 10;
	float numbers[array_size] = { 0 };

	writeln("The numbers have been initialized as")
	write("[")
	for (int i = 0; i < array_size; i++) {
		
		numbers[i] = (float)(rand()) / (float)(RAND_MAX) * 100;
		write(numbers[i]);
		if (i != array_size - 1) write(", ");
	}
	writeln("]");

	writeln("");

	writeln("Actual numbers:");
	writeln(numbers[3]); // fourth element has an index of 3
	writeln(numbers[9]); // tenth element has an index of 9
	writeln("Meaningless garbage:");
	writeln(numbers[10]);
	writeln(numbers[11]);
	writeln(numbers[12]);

	writeln("");

	float average_value = 0;

	for (int i = 0; i < array_size; i++) {
		
		average_value += numbers[i];
	}
	
	average_value /= array_size;
	writeln("The average value of the array is:")
	writeln(average_value);
}