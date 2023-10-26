# Двадцать шестое октября

## Задание 1

> Составить алгоритм увеличения трех чисел, введенных с клавиатуры, на 5, если среди них есть хотя бы два равных числа. В противном случае выдать ответ «равных чисел нет».

(из [`Task 1\src\main.cpp`](./Task%201/src/main.cpp))

```cpp
// variable definitions
int first;
int second;
int third;

// data input
writeln("Enter a number: (1/3)");
read(first);

writeln("Enter a number: (2/3)");
read(second);

writeln("Enter a number: (3/3)");
read(third);

// checking if there are no equal numbers
if (first != second && second != third && first != third) {
	
	writeln("No equal numbers entered");
	return 0;
}

// incrementing by five
first += 5;
second += 5;
third += 5;

// data output
write("First number: "); writeln(first);
write("Second number: "); writeln(second);
write("Third number: "); writeln(third);
```

`write()` и `read()` определены соответствующе: 

(из [`Task 1\include\read_write.hpp`](./Task%201/include/read_write.hpp))
```cpp
#define write(value) std::cout << value;
#define writeln(value) std::cout << value << std::endl;
#define read(variable) std::cin >> variable;
```

## Задание 2

> Составить программу-тест, которая по очереди выводит на экран вопросы (вопросы выбираются вами) с вариантами ответов. В тесте должно быть минимум 3 вопроса. Правильность ответа на вопросы должна проверяться с помощью конструкции «if». В конце работы программа выдает количество заработанных баллов по результатам ответа.

(из [`Task 2\src\main.cpp`](./Task%202/src/main.cpp))

```cpp
// variable definition
std::string first_answer;
// ...
std::string fifth_answer;
int total_score = 0;

// answer: 5
writeln("Given the equation 2x^2 - 12x + 10 = 0, what is the greater root for it?");
read(first_answer);

// ...

// answer: 1
writeln("What is the value of (2x + 3) / (x^2 + 3) if x = 2?");
read(fifth_answer);

// score evaluation
if (first_answer == "5") total_score++;
// ...
if (fifth_answer == "1") total_score++;

// score output
write("Your total score is "); write(total_score); writeln(" out of 5");
```