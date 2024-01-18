#include "main.hpp"

// Входная точка программы
int main() {
	
	bool program_terminated = false;
	// Отвечает за статус работы программы

	do {

		writeln("Enter an empty string to stop the program");
		writeln("Enter the message to encode below:")

		// Ввод сообщения пользователя
		std::string message;
		readln(message);

		if (message == "") {
			// Если сообщение пустое, работа программы завершается
			program_terminated = true;
		}
		else {

			// Перевод сообщения на азбуку морзе с помощью функции encode_string()
			std::string encoded_message = encode_string(message);

			// Вывод сообщения пользователя
			writeln(encoded_message);
		}

	} while (!program_terminated);
	// Тело цикла повторяется пока работа программы не завершится
}