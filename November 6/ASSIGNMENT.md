# Второе ноября

## Задание 1

Программа, проверяющая, есть ли в введенной строке подстрока "нос":

(из [`Task 1\src\main.cpp`](./Task%201/src/main.cpp))

```cpp
std::string input_string;
	
writeln("Enter a string to search");
read(input_string);

if (input_string.find("сон") != std::string::npos) {
	writeln("The string contains \"сон\"");
} else {
	writeln("The string doesn't contain \"сон\"");
}
```

## Задание 2

Программа, вставляющая в середину первой строки вторую:

(из [`Task 2\src\main.cpp`](./Task%202/src/main.cpp))

```cpp
std::string target_string;
std::string source_string;

writeln("Enter a string to insert into");
read(target_string);
writeln("Enter a string to insert");
read(source_string);

int length = target_string.length();
target_string.insert(length / 2, source_string);

writeln(target_string);
```