# Тридцатое октября

## Задание 1

> Написать программу, которая будет считывать с клавиатуры числа в переменную, пока не будет введено число 0.

(из [`Task 1\src\main.cpp`](./Task%201/src/main.cpp))
```cpp
int number = 0;

while (true) {

	writeln("enter a number:");
	read(number);
	write("the number you entered is "); writeln(number);

	if (number == 0) break;
}
```

`writeln()`, `write()` и `read()` определены соответствующе:

(из [`Task 1\include\write_read.hpp`](./Task%201/include/write_read.hpp))

```cpp
#define write(value) std::cout << value;
#define writeln(value) std::cout << value << std::endl;
#define read(variable) std::cin >> variable;
```

## Задание 2

> Напишите программу «Почемучка». Программа должна постоянно задавать вопрос «Почему?» и запрашивать у пользователя ответ до тех пор, пока пользователь не ответит «Потому что».

(из [`Task 2\src\main.cpp`](./Task%202/src/main.cpp))
```cpp
std::string response;

while (true) {

	writeln("Почему?");
	readln(response);
	if (response == "потому что" || response == "Потому что") return 0;
}
```

`readln()` определен соответствующе:

(из [`Task 2\include\write_read.hpp`](./Task%202/include/write_read.hpp))

```cpp
#define readln(variable) std::getline(std::cin, variable);
```