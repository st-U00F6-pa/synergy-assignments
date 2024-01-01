# Четырнадцатое декабря

## Задание 1

> Необходимо создать функцию "лотерея" (параметр “билет” нужно передать по ссылке), которая возвращает пользователю сумму выигрыша. Нужно учесть:
> * вероятность выиграть джекпот 1% (джекпот даёт пользователю еще 10 билетов)
> * вероятность выиграть рандомную сумму 49%,  
> * вероятность ничего не выиграть равна 50%.
>
> Для вычисления вероятности можно просто генерировать число `rand() % 100 + 1`

(из [`src\lottery.cpp`](./src/lottery.cpp))

```cpp
int gamble(int& tickets) {

	if (tickets <= 0) return 0;

	tickets -= 1;

	int number = rand() % 100;

	if (number == 0) {

		tickets += 10;
		return JACKPOT_PRIZE;
	}

	if (number < 49) {

		return rand() % (MAX_PRIZE - MIN_PRIZE) + MIN_PRIZE;
	}
	return 0;
}
```

`MAX_PRIZE`, `MIN_PRIZE` и `JACKPOT` определены соответствующе:

(из [`include\lottery.hpp`](./include/lottery.hpp))

```cpp
#define MIN_PRIZE 10
#define MAX_PRIZE 500
#define JACKPOT_PRIZE 1000
```

> В функции main должна быть переменная “билеты”, которая должна уменьшаться в функции “лотерея” на один (изначально 10). Также нужна переменная “общая сумма выигрыша” куда будет прибавляться число полученное после вызова функции “лотерея”. 

(из `main()` в [`src\main.cpp`](./src/main.cpp))

```cpp
int tickets = 10;
int savings = 0;
```

> Необходимо написать цикл, который будет вызывать функцию “лотерея” и добавлять выигрыш к общей сумме, пока не закончатся билеты. Выводите сумму выигрыша и общую сумму на экран в каждой итерации цикла.

(из `main()` в [`src\main.cpp`](./src/main.cpp))

```cpp
writeln("------------------------------------------\n");
while (tickets != 0) {

	int profit = gamble(tickets);

	savings += profit;

	if (profit == 0) {
		// no win code
		writeln("  Unfortunately, you didn't win anything.");
	}
	else if (profit == JACKPOT_PRIZE) {
		// jackpot win code
		write("  Congratulations! You just won the jackpot. The prize is "); write(profit); writeln("$");;
	}
	else {
		// regular win code
		write("  Congratulations! You just won "); write(profit); writeln("$");;
	}
	
	write("  Your current balance is "); write(savings); writeln("$");
	write("  You have "); write(tickets); writeln(" tickets left");
	writeln("\n------------------------------------------\n");
}
```