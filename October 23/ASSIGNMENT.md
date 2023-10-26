# Двадцать третье октября

## Задание 1

> Создайте проект "Console Application"

![](./Task_1.png)

## Задание 2

> Создайте несколько переменных. Все переменные должны иметь разный тип данных. Заполните их данными.

(из [`src\main.cpp`](./src/main.cpp))

```cpp
unsigned char char_variable = 255;
unsigned short short_int_variable = 65535;
unsigned int int_variable = 4294967295;

char char_array_variable[] = "this is a null terminated string\0";
std::string string_variable = "this is a string from the standard library"; 
```

## Задание 3 

> Перезапишите часть переменных с помощью «cin». Выведите содержимое всех переменных в консоль.

(из [`src\main.cpp`](./src/main.cpp))

```cpp
writeln("");
writeln("this is the value of \"char_variable\":");
writeln((int)char_variable); 
// a conversion is necessary, otherwise the variable would be written out as a character 

writeln("");
writeln("this is the value of \"short_int_variable\":");
writeln(short_int_variable);

// ...

writeln("");
writeln("enter the new numerical value of \"int_variable\" (from 0 to 4294967295)");
read(int_variable);

writeln("");
writeln("the new value of \"int_variable\":");
writeln(int_variable);

// ...
```

`write()` и `read()` определены соответствующе: 

(из [`include\write_read.hpp`](./include/write_read.hpp))
```cpp
#define write(value) std::cout << value;
#define writeln(value) std::cout << value << std::endl;
#define read(variable) std::cin >> variable;
```