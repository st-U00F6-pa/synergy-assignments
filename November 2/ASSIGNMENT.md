# Второе ноября

## Задание 1

> Вывести на экран ряд чисел от 1 000 000 до 2 000 000.

(из [`Task 1\src\main.cpp`](./Task%201/src/main.cpp))

```cpp
// writing numbers out one by one causes the program to be very slow
std::string number_string = "";

for (int i = 1000000; i <= 2000000; i++) {

	number_string += std::to_string(i) + " ";
}
write(number_string);
```

## Задание 2

> Напишите программу, которая выведет таблицу умножения на 7.

(из [`Task 2\src\main.cpp`](./Task%202/src/main.cpp))

```cpp
for (int i = 1; i <= 9; i++) {
	write("7 x "); write(i); write(" = "); writeln(7*i);
}
```