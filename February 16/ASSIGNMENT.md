# Шестнадцатое февраля

## Задание 1

> Создать класс Animal. Добавить в класс приватное поле возраст(int) и публичное  поле название(string) животного. Создать конструктор для инициализации этих полей.

(из [`\include\animal.hpp`](./include/animal.hpp))
```cpp
class animal {

    int age;
    
public:

    std::string species;

    animal(int age, std::string species);
    void print();
    void birthday(int number);
};
```

(из [`\src\animal.cpp`](./src/animal.cpp))
```cpp
animal::animal(int age, std::string species) {

    (*this).age = age;
    (*this).species = species;
}
```

> Создать три объекта класса Animal в функции main.

(из `main()` в [`\src\source.cpp`](./src/source.cpp))
```cpp
std::vector<animal> animals {
	animal(15, "cow"),
	animal(16, "cow"),
	animal(19, "cow"),
};
// They're all cows of different age
```

> Создать метод print(), который выводит на экран название и возраст животного.

(из [`\src\animal.cpp`](./src/animal.cpp))
```cpp
void animal::print() {

    write("Animal's age: "); writeln((*this).age);
    write("Animal's species: "); writeln((*this).species);
}
```

> Вызвать этот метод для всех объектов в функции main.

(из `main()` в [`\src\source.cpp`](./src/source.cpp))
```cpp
for (int i = 0; i < animals.size(); i++) {

	animals[i].print();
}
```

> Почему таким образом получается вывести на экран приватный возраст животного?

*Потому что поле, содержащее ворзаст, доступно в скопе функции `print()`, т.к. она принадлежит такому же классу, что и поле.*

> Создать метод birthday(int number), который добавляет к возрасту животного число number и вызывает метод print

(из [`\src\animal.cpp`](./src/animal.cpp))
```cpp
void animal::birthday(int number) {

    (*this).age += number;
    (*this).print();
}
```