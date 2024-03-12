#include "question.hpp"


question::question(std::string text, int correct_option_index, std::vector<std::string> options) {

    (*this).text = text;
    (*this).correct_option_index = correct_option_index;
    (*this).options = options;
}
    
bool question::ask(bool show_result, bool show_correct_answer) {

    writeln(text);

    for (int i = 0; i < options.size(); i++) {

        write(i + 1); write(". "); writeln(options[i]);
    }

    std::string user_answer;
    write("Answer: "); readln(user_answer);

    if (show_result) {

        if (user_answer == std::to_string(correct_option_index + 1)) {

            writeln("Correct!");
        }
        else {

            writeln("Incorrect.");

            if (show_correct_answer) {

                write("The correct answer was \""); write(options[correct_option_index]); writeln("\".");
            }
        }
    }    

    return user_answer == std::to_string(correct_option_index + 1);
}