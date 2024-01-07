# Двадцать восьмое декабря

## Задание 1

> Написать программу, которая позволяет пользователю с помощью встроенной функции sort отсортировать вектор, состоящий из 10 элементов, по возрастанию.

(из `main()` в [`Task 1\src\main.cpp`](./Task%201/src/main.cpp))

```cpp
std::vector<int> numbers(10);

writeln("Enter ten integer numbers below:");

for (int i = 0; i < 10; i++) {

	int number;
	read(number);
	numbers[i] = number;
}

std::sort(numbers.begin(), numbers.end());
```

> Вывести отсортированный вектор в консоль.

(из `main()` в [`Task 1\src\main.cpp`](./Task%201/src/main.cpp))

```cpp
writeln("The sorted numbers are:");
	
write("[ ");
for (int i = 0; i < 10; i++) {

	write(numbers[i]);
	if (i != 9) write(", ");
}
write(" ]");
```

## Задание 2

> Создать и заполнить массив элементами с клавиатуры.

(из `main()` в [`Task 2\src\main.cpp`](./Task%202/src/main.cpp))

```cpp
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
```

> Выполнить сортировку массива с помощью "сортировки пузырьком".

(из `main()` в [`Task 2\src\main.cpp`](./Task%202/src/main.cpp))

```cpp
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
```

Метод `swap()` определен соответствующе

(из [`Task 2\src\main.cpp`](./Task%202/src/main.cpp))

```cpp
void swap(int& a, int& b) {

	int c = a;
	a = b;
	b = c;
}
```

> Вывести на экран массив после сортировки. 

(из `main()` в [`Task 2\src\main.cpp`](./Task%202/src/main.cpp))

```cpp
writeln("The sorted numbers are:");
	
write("[ ");
for (int i = 0; i < length; i++) {

	write(numbers[i]);
	if (i != length - 1) write(", ");
}
write(" ]");
```