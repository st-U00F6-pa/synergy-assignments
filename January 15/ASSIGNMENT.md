# Пятнадцатое января

## Задание 1

> Написать программу, которая считывает имя пользователя из консоли.

(из `main()` в [`\src\main.cpp`](./src/main.cpp))
```cpp
std::string name;

writeln("Please enter your name below:");
readln(name);
```

> Записать в файл строку, приветствующую пользователя по введенному имени.

(из `main()` в [`\src\main.cpp`](./src/main.cpp))
```cpp
std::ofstream greeting_file_output("greeting.txt");
	
if (greeting_file_output.is_open()) {
	
	greeting_file_output << ("Welcome, " + name);
}

greeting_file_output.close();
```

> Считать эту строку из файла и вывести её в консоль.

(из `main()` в [`\src\main.cpp`](./src/main.cpp))
```cpp
std::ifstream greeting_file_input("greeting.txt");
	
if (greeting_file_input.is_open()) {
	
	std::string greeting;
	getline(greeting_file_input, greeting);
	
	writeln(greeting);
}
```
