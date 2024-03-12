# Тринадцатое февраля

## Задание 1

> Создать класс Animal. Добавить в класс следующие поля, характеризующие животное: возраст(int) и название(string). Добавить конструктор класса Animal принимающий в аргументы строку с названием животного и число возраст животного. <...> Сделать поле возраст приватным.

(из [`\include\animal.hpp`](./include/animal.hpp))
```cpp
class animal {

    int age;
    
public:

    std::string species;

    animal(int age, std::string species);
};
```
(из [`\src\animal.cpp`](./src/animal.cpp))
```cpp
animal::animal(int age, std::string species) {

    (*this).age = age;
    (*this).species = species;
}
```

> Создать три объекта класса Animal с помощью конструктора в функции main
> Вывести на экран всю доступную информацию о любом животном из созданных.

(из `main()` в [`\src\source.cpp`](./src/source.cpp))
```cpp
std::vector<animal> animals {
    animal(15, "cow"),
    animal(16, "cow"),
    animal(19, "cow"),
};
// They're all cows of different age

for (int i = 0; i < animals.size(); i++) {

    writeln(animals[i].species);
}
```

> Объяснить: почему возраст не получается вывести на экран?

*Возраст не получится вывести на экран из-за того что поле, содержащее его, недоступно в скопе функции `main()`.*