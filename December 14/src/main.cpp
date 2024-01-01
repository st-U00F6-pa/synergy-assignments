#include "main.hpp"

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(0));

	int tickets = 10;
	int savings = 0;

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
}