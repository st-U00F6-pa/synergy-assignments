#include "translate.hpp"

std::map<char, std::string> encoding_dictionary {
	{'a', ".-"},
	{'b', "-..."},
	{'c', "-.-."},
	{'d', "-.."},
	{'e', "."},
	{'f', "..-."},
	{'g', "--."},
	{'h', "...."},
	{'i', ".."},
	{'j', ".---"},
	{'k', "-.-"},
	{'l', ".-.."},
	{'m', "--"},
	{'n', "-."},
	{'o', "---"},
	{'p', ".--."},
	{'q', "--.-"},
	{'r', ".-."},
	{'s', "..."},
	{'t', "-"},
	{'u', "..-"},
	{'v', "...-"},
	{'w', ".--"},
	{'x', "-..-"},
	{'y', "-.--"},
	{'z', "--.."},
	{'0', "-----"},
	{'1', ".----"},
	{'2', "..---"},
	{'3', "...--"},
	{'4', "....-"},
	{'5', "....."},
	{'6', "-...."},
	{'7', "--..."},
	{'8', "---.."},
	{'9', "----."},
	{' ', "/"}
};

std::string encode_string(std::string input) {

 	std::string output;

	for (char character : input) {

		if (encode_character(character) != "") output += encode_character(character) += " ";
	}

	return output;
}

std::string encode_character(char input) {
	
	input = (char)std::tolower(input);

	if (encoding_dictionary.count(input) == 0) return "";
	else return encoding_dictionary[input];
}