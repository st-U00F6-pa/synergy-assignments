# Двадцать пятое декабря

## Задание 1

> Создать словарь - список покупок. Каждый элемент должен содержать в себе название продукта / вещи и количество, которое надо приобрести. Что ты выберешь для ключа, а что - для значения и почему?

(из `main()` в [`src\main.cpp`](./src/main.cpp))

```cpp
std::map<std::string, int> grocery_list{};
```

Для ключа будет выбрана строка, содержащая наименование продукта (и кодировку значения: штуки, граммы, миллилитры, т.д.). Для значения будет выбрано число, кодирующее количество продукта.

> Заполнить словарь 5-ю элементами.

```cpp
grocery_list["milk_ml"] = 2000;
grocery_list["eggs"] = 10;
grocery_list["cheese_g"] = 300;
grocery_list["chicken_breasts"] = 4;
grocery_list["salt"] = 1;
```

> Вывести на экран все пары ключ-значение, затем добавить два элемента и повторно вывести всё на экран. 

```cpp
for (auto [key, value] : grocery_list) {

	write("Grocery id: "); writeln(key);
	write("Grocery amount: "); writeln(value);
	writeln("");
}

grocery_list["lemons"] = 1;
grocery_list["cola_ml"] = 330;

for (auto [key, value] : grocery_list) {

	write("Grocery id: "); writeln(key);
	write("Grocery amount: "); writeln(value);
	writeln("");
}
```