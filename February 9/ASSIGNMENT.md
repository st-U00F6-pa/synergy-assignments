# Девятое февраля

## Задание 1

> Создать структуру Animal. Добавить в структуру следующие поля, характеризующие животное: возраст(int), название(string) и вес(double).

(из [`\include\animal.hpp`](./include/animal.hpp))
```cpp
struct animal {

    int age;
    double weight;
    std::string species;
};
```

> В функции main создать пять объектов Animal, вывести на экран только названия животных.
> В функции main изменить вес одного из животных. Вывести на экран вес “до” и “после” изменения.

(из `main()` в [`\src\source.cpp`](./src/source.cpp))
```cpp
std::vector<animal> animals {
    {
        20,
        600.0,
        "cow"
    },
    // ...
};

writeln("Names of animals in order:")
for (int i = 0; i < animals.size(); i++) {
    
    writeln(animals[i].species);
}

writeln("Current weight of an animal number 3:");
writeln(animals[2].weight);

animals[2].weight += 1;

writeln("Current weight of an animal number 3:");
writeln(animals[2].weight);
```
