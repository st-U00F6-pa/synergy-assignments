#include "main.hpp"

int main() {
	
	// variable definition
	std::string first_answer;
	std::string second_answer;
	std::string third_answer;
	std::string fourth_answer;
	std::string fifth_answer;
	int total_score = 0;

	// answer: 5
	writeln("Given the equation 2x^2 - 12x + 10 = 0, what is the greater root for it?");
	read(first_answer);

	// answer: -4
	writeln("Given the funciton x^3 + 2x^2 - 4x - 2, what is its derivative at x = 0?");
	read(second_answer);

	// answer: 10101010
	writeln("What is the number 170 in binary?");
	read(third_answer);

	// answer: 153
	writeln("What is the number 10011001 in decimal?");
	read(fourth_answer);

	// answer: 1
	writeln("What is the value of (2x + 3) / (x^2 + 3) if x = 2?");
	read(fifth_answer);

	// score evaluation
	if (first_answer == "5") total_score++;
	if (second_answer == "-4") total_score++;
	if (third_answer == "10101010") total_score++;
	if (fourth_answer == "153") total_score++;
	if (fifth_answer == "1") total_score++;

	// score output
	write("Your total score is "); write(total_score); writeln(" out of 5");
}