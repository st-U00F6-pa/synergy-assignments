#include "source.hpp"

int main() {
	
    writeln("Enter your name:");

    std::string name;
    readln(name);
    writeln("");

    bool take_quiz_again = false;

    quiz example_quiz({

        question("Question text", 2, {"Incorrect answer", "Incorrect answer", "Correct answer", "Incorrect answer"}),
        question("Question text", 1, {"Incorrect answer", "Correct answer", "Incorrect answer", "Incorrect answer"}),
        question("Question text", 3, {"Incorrect answer", "Incorrect answer", "Incorrect answer", "Correct answer"}),
        question("Question text", 2, {"Incorrect answer", "Incorrect answer", "Correct answer", "Incorrect answer"}),
        question("Question text", 3, {"Incorrect answer", "Incorrect answer", "Incorrect answer", "Correct answer"}),
        question("Question text", 0, {"Correct answer", "Incorrect answer", "Incorrect answer", "Incorrect answer"}),
        question("Question text", 1, {"Incorrect answer", "Correct answer", "Incorrect answer", "Incorrect answer"}),
        question("Question text", 2, {"Incorrect answer", "Incorrect answer", "Correct answer", "Incorrect answer"}),
        question("Question text", 0, {"Correct answer", "Incorrect answer", "Incorrect answer", "Incorrect answer"}),
        question("Question text", 2, {"Incorrect answer", "Incorrect answer", "Correct answer", "Incorrect answer"})

    }, "name", true, true);

    do {

        example_quiz.start();

        writeln("Would you like to take the quiz again? (\"yes\" to take, anything else to quit)");
        std::string answer;
        readln(answer);
        writeln("");

        take_quiz_again = answer == "yes";
    } 
    while (take_quiz_again);
}