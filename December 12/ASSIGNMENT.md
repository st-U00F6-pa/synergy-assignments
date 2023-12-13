# Двенадцатое декабря

## Задание 1

> * Написать программу, которая позволяет пользователю ввести в консоль два целых числа.

(из `main()` в [`src\main.cpp`](./src/main.cpp))

```cpp
int first_number;
int second_number;

writeln("Enter the first number");
read(first_number);

writeln("Enter the second number");
read(second_number);
```

> * Написать функцию, которая вычислит сумму двух этих чисел и вернёт результат функцию main.

(из [`src\sum.cpp`](./src/sum.cpp))

```cpp
int sum(int a, int b) {
	
	return a + b;
}
```

> * В функции main вывести результат выполнения функции для расчета на экран.

(из `main()` в [`src\main.cpp`](./src/main.cpp))

```cpp
write("The sum of the numbers is ");
writeln(sum(first_number, second_number));
```

## Задание 2

> Какой тип можно было бы использовать для функции, если бы не надо было возвращать конечный результат в функцию main?

Для функций, которые не возвращают значений в результате своей работы, используется тип `void`. Использование ключевого слова `return` в такой функции вызовет ошибку компиляции.