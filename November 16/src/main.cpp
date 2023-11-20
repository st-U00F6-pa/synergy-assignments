#include "main.hpp"

int main() {
	
	while (true) {

		writeln("Enter an empty string to stop the program");
		writeln("Enter your expression:");

		std::string expression;
		readln(expression);

		if (expression == "") break;

		int word_index = 0;
		std::string left_operand_string = "";
		std::string operator_string = "";
		std::string right_operand_string = "";

		for (std::string::iterator ptr = expression.begin(); ptr < expression.end(); ptr++) {

			char character = *ptr;
			
			if (character == ' ') {
				word_index++; continue;
			}

			switch (word_index) {
				case 0:
					left_operand_string += character; break;
				case 1:
					operator_string += character; break;
				case 2:
					right_operand_string += character; break;
			}
		}

		double left_operand;
		double right_operand;
		double result;

		if (word_index != 2) {

			writeln("Error - A malformed expression provided");
			continue;
		}
		try {

			left_operand = std::stod(left_operand_string);
			right_operand = std::stod(right_operand_string);
		} 
		catch (...) {
			
			writeln("Error - A malformed expression provided");
			continue;
		}

		if (operator_string == "+") {
			result = left_operand + right_operand;
		}
		else if (operator_string == "-") {
			result = left_operand - right_operand;
		}
		else if (operator_string == "*") {
			result = left_operand * right_operand;
		}
		else if (operator_string == "/") {

			if (right_operand == 0) {
				
				writeln("Error - Division by zero encountered");
				continue;
			}
			result = left_operand / right_operand;
		}
		else if (operator_string == "^") {
			result = std::pow(left_operand, right_operand);
		}
		else {
			writeln("Error - A malformed expression provided");
			continue;
		}
		write("The value of the expression is "); writeln(result);
	}
}