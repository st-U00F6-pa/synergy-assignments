#include <map>
#include <string>

// Кодирует строку с латинскими символами и числами в азбуку морзе
std::string encode_string(std::string input);

// Кодирует латинский символ или число в азбуку морзе
// Возвращает пустую строку если символ не найден в алфавите
std::string encode_character(char input);