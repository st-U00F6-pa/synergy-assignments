# Пятое марта

## Задание 1

> Создать класс Animal добавить три поля, три метода и три конструктора. Добавить в проект заголовочный файл Animal.h и перенести в него класс Animal. Добавить в проект файл ресурсов Animal.cpp. Перенести реализацию всех методов класса Animal в файл Animal.cpp.

(из [`\include\animal.hpp`](./include/animal.hpp))
```cpp
class animal {

    // I see no reason for any of the properties to be private

public:

    int age;
    std::string name;
    std::string species;

    animal();
    animal(std::string name, std::string species);
    animal(int age, std::string name, std::string species);

    bool compareAge(int age);
    bool compareAge(const animal& a);
    void print();
};
```

(из [`\src\animal.cpp`](./src/animal.cpp))
```cpp
#include "animal.hpp"

animal::animal(int age, std::string name, std::string species) {

    // ...
}
animal::animal(std::string name, std::string species) {

    // ...
}
animal::animal() {

    // ...
}

bool animal::compareAge(int age) {

    // ...
}
bool animal::compareAge(const animal& a) {

    // ...
}
void animal::print() {

    // ...
}
```

> Добавить в проект заголовочный файл Info.h и написать в этом файле функцию info(const Animal& a) внутри которого написать sizeof(a).

(из [`\include\info.hpp`](./include/info.hpp))
```cpp
#pragma once
#include "animal.hpp"

int info(const animal& a);
```

(из [`\src\info.cpp`](./src/info.cpp))
```cpp
#include "info.hpp"

int info(const animal& a) {

    return(sizeof(a));
}
```

> Добавить в файл Source.cpp строчку #include “Animal.h”. Добавить в файл с функцией main строчку #include “Info.h”.

*Вместо добавления нескольких директив в файл `\src\source.cpp` был создан файл `\include\source.hpp`, к которому обращается файл `\src\source.cpp`.*


(из [`\include\source.hpp`](./include/source.hpp))
```cpp
#pragma once
#include "write_read.hpp"
#include "animal.hpp"
#include "info.hpp"
#include <vector>
#include <string>

int main();
```

> В функции main создать пять объектов и для одного объекта вызвать все методы класса. Вызвать метод info для каждого объекта класса Animal.

(из `main()` в [`\src\source.cpp`](./src/source.cpp))
```cpp
std::vector<animal> animals {

	animal(11, "miguel", "cow"),
	animal(13, "eduardo", "cow"),
	animal(9, "emmanuel", "cow"),
	animal(7, "juan", "cow"),
	animal(8, "gabriel", "cow")
};

animals[3].print();
animals[3].compareAge(5);
animals[3].compareAge(animals[4]);

for (int i = 0; i < animals.size(); i++) {
	
	info(animals[i]);
}
```