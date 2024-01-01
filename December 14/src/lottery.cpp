#include "lottery.hpp"
#include "write_read.hpp"

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