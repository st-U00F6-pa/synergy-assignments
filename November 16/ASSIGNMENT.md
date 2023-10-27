# Шестнадцатое ноября

## Задание 1

> Напишите консольное приложение, которое будет выполнять функции простого калькулятора. Программа должна запрашивать два целых или вещественных числа, а также знак математической операции. Программа должна поддерживать следующие операции: сложение, вычитание, деление, умножение, возведение в степень. При вычислении частного чисел программа должна проверять не пытается ли пользователь осуществить деление на 0. При делении на 0 в консоль должно выводиться сообщение о невозможности вычисления частного. Приложение должно иметь возможность производить вычисление за вычислением без необходимости перезапускать программу.

Ввод выражений производится в формате "`operand operator operand`" через пробелы, где `operand`-ы — значения, над которыми проводятся операция, `operator` — один из операторов (`+`, `*`, `/`, `-`, `^`).
Для парсинга такого несложного выражения входная строка посимвольно анализируется, каждый ее символ определяется в одну из трех переменных-строк, а символ `' '` сменяет одну строку на другую (меняет левый операнд на оператор, затем оператор на правый операнд).

(из [`src\main.cpp`](./src/main.cpp))

```cpp
writeln("Enter your expression:");

std::string expression;
readln(expression);

int word_index = 0;
std::string left_operand_string = "";
std::string operator_string = "";
std::string right_operand_string = "";

for (std::string::iterator ptr = expression.begin(); ptr < expression.end(); ptr++) {

	char character = *ptr;
	
	if (character == ' ') {
		word_index++; continue;
	}

	switch (word_index) {
		case 0:
			left_operand_string += character; break;
		case 1:
			operator_string += character; break;
		case 2:
			right_operand_string += character; break;
	}
}
```

Затем выражение проверяется на целостность. Например, если у разбитой на пробелы исходной строки не ровно три части, выражение считается нерабочим. Точно так же оно считается нерабочим если строки-операнды невозможно конвертировать в `double`.

(из [`src\main.cpp`](./src/main.cpp))

```cpp
double left_operand;
double right_operand;
double result;

if (word_index != 2) {

	writeln("Error - A malformed expression provided");
	continue;
}
try {

	left_operand = std::stod(left_operand_string);
	right_operand = std::stod(right_operand_string);
} 
catch (...) {
	
	writeln("Error - A malformed expression provided");
	continue;
}
```

Наконец, значение выражения вычисляется. Оператор сравнивается с каждым из пяти и значение вычисляется с использованием соответствующей операции. В случае деления происходит дополнительная проверка на случай деления на ноль. В случае, если оператор не является ни одним из пяти существующих, выражение считается нерабочим.

(из [`src\main.cpp`](./src/main.cpp))

```cpp
if (operator_string == "+") {
	result = left_operand + right_operand;
}
else if (operator_string == "-") {
	result = left_operand - right_operand;
}
else if (operator_string == "*") {
	result = left_operand * right_operand;
}
else if (operator_string == "/") {

	if (right_operand == 0) {
		
		writeln("Error - Division by zero encountered");
		continue;
	}
	result = left_operand / right_operand;
}
else if (operator_string == "^") {
	result = std::pow(left_operand, right_operand);
}
else {
	writeln("Error - A malformed expression provided");
	continue;
}
write("The value of the expression is "); writeln(result);
```