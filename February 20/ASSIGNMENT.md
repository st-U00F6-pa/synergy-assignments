# Двадцатое февраля

## Задание 1

> Создать класс Animal. Добавить в класс приватное поле возраст(int) и публичное  поле название(string) животного. 

(из [`\include\animal.hpp`](./include/animal.hpp))
```cpp
class animal {

    int age;
    
public:

    std::string species;

    // ...
};
```

> Создать три конструктора для этого класса:
> * без параметров ()
> * с одним параметром (string name) 
> * с двумя параметрами (string name, int age)


(из [`\src\animal.cpp`](./src/animal.cpp))
```cpp
animal::animal(int age, std::string species) {

    (*this).age = age;
    (*this).species = species;
}
animal::animal(std::string species) {

    (*this).age = 0;
    (*this).species = species;
}
animal::animal() {

    (*this).age = 0;
    (*this).species = "N/A";
}
```

> В функции main создать пять объектов класса Animal.

(из `main()` в [`\src\source.cpp`](./src/source.cpp))
```cpp
std::vector<animal> animals {

	animal(11, "cow"),
	animal(13, "cow"),
	animal(9, "cow"),
	animal(7, "cow"),
	animal(8, "cow")
};
```

> Создать два метода compareAge (метод должен возвращать true или false)
> * c параметром int age (сравнить возраст животного с числом)
> * с параметром Animal a (сравнить возраст двух животных между собой)


(из [`\src\animal.cpp`](./src/animal.cpp))
```cpp
bool animal::compareAge(int age) {

    return (*this).age > age;
}
bool animal::compareAge(animal a) {

    return (*this).age > a.age;
}
```

> Почему вместо параметра “Animal a” лучше написать “const Animal& a?

*Таким образом можно избежать создания ненужных копий, на что ушло бы больше времени, чем на передачу ссылки.*