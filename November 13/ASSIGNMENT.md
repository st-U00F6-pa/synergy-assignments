# Тринадцатое ноября

## Задание 1

> Создайте массив типа «int» из 100 элементов и заполните его с помощью ГПСЧ. Необходимо посчитать количество чётных и нечётных элементов. Если чётных чисел больше, то в консоль нужно вывести только четные элементы массива, иначе нечётные. Ноль будем считать чётным числом. Возможна ситуация, когда количество чётных и нечётных одинаково, в этом случае нужно вывести в консоль весь массив.

(из [`src\main.cpp`](./src/main.cpp))

```cpp
// Generating an array of random numbers

srand(time(0));

const int array_size = 100;
int numbers[array_size] = { 0 };

for (int i = 0; i < array_size; i++) {

	numbers[i] = rand();
}

// Counting odd and even numbers

int even_numbers_counter = 0;
int odd_numbers_counter = 0;

for (int i = 0; i < array_size; i++) {

	if (numbers[i] % 2 == 0) even_numbers_counter++;
	else odd_numbers_counter++; 
}

// Comparing the counters and outputting the filtered array

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
```