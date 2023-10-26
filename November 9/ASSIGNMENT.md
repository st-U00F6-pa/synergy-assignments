# Девятое ноября

## Задание 1

> Создайте массив с 10 элементами. Заполните его с помощью ГПСЧ. Попробуйте вывести четвертый, десятый, сотый или любой другой элемент, который вы не создавали. Почему при выходе за пределы массива мы получаем «мусор», а не нули?

Ответ: индексация за пределами массива ведет к неопределенному поведению. Например, области памяти, прочитанные при индексации за границами массива, могут быть интерпретированны как числа, хотя содержат нечисловую информацию.

(из [`src\main.cpp`](./src/main.cpp))

```cpp
srand(time(0));

const int array_size = 10;
float numbers[array_size] = { 0 };

// ... 
for (int i = 0; i < array_size; i++) {
	
	numbers[i] = (float)(rand()) / (float)(RAND_MAX) * 100;
	// ...
}

// ...

writeln("Actual numbers:");
writeln(numbers[3]); // fourth element has an index of 3
writeln(numbers[9]); // tenth element has an index of 9
writeln("Meaningless garbage:");
writeln(numbers[10]);
writeln(numbers[11]);
writeln(numbers[12]);
```

## Задание 2

> Используйте созданный массив. Выведете среднее арифметическое значение элементов этого массива.

(из [`src\main.cpp`](./src/main.cpp))

```cpp
float average_value = 0;

for (int i = 0; i < array_size; i++) {
	
	average_value += numbers[i];
}

average_value /= array_size;
writeln("The average value of the array is:")
writeln(average_value);
```