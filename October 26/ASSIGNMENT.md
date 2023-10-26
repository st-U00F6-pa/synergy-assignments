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
write("Enter a number: (1/3)");
read(first);

write("Enter a number: (2/3)");
read(second);

write("Enter a number: (3/3)");
read(third);

// checking if there are no equal numbers
if (first != second && second != third && first != third) {
	
	// "равных чисел нет"
	write("No equal numbers entered");
	return 0;
}

// incrementing by five
first += 5;
second += 5;
third += 5;

// data output
write(std::string("First number: ") + std::to_string(first));
write(std::string("Second number: ") + std::to_string(second));
write(std::string("Third number: ") + std::to_string(third));
```

`write()` и `read()` определены соответствующе: 

(из [`Task 1\src\main.cpp`](./Task%201/src/main.cpp))
```cpp
template<typename T>
void write(T value) {
	
	std::cout << value << std::endl;
}

void write() {

	std::cout << "" << std::endl;
}

template<typename T>
void read(T& variable) {

	std::cin >> variable;
}
```

## Задание 2

> Составить программу-тест, которая по очереди выводит на экран вопросы (вопросы выбираются вами) с вариантами ответов. В тесте должно быть минимум 3 вопроса. Правильность ответа на вопросы должна проверяться с помощью конструкции «if». В конце работы программа выдает количество заработанных баллов по результатам ответа.

(из [`Task 2\src\main.cpp`](./Task%202/src/main.cpp))

```cpp
// variable definition
std::string first_answer;
std::string second_answer;
std::string third_answer;
std::string fourth_answer;
std::string fifth_answer;
int total_score = 0;

// answer: 5
write("Given the equation 2x^2 - 12x + 10 = 0, what is the greater root for it?");
read(first_answer);

// answer: -4
write("Given the funciton x^3 + 2x^2 - 4x - 2, what is its derivative at x = 0?");
read(second_answer);

// answer: 10101010
write("What is the number 170 in binary?");
read(third_answer);

// answer: 153
write("What is the number 10011001 in decimal?");
read(fourth_answer);

// answer: 1
write("What is the value of (2x + 3) / (x^2 + 3) if x = 2?");
read(fifth_answer);

// score evaluation
if (first_answer == "5") total_score++;
if (second_answer == "-4") total_score++;
if (third_answer == "10101010") total_score++;
if (fourth_answer == "153") total_score++;
if (fifth_answer == "1") total_score++;

// score output
write(
	std::string("Your total score is ") + 
	std::to_string(total_score) + 
	std::string(" out of 5")
	);
```