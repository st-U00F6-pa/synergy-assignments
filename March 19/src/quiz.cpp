#include "quiz.hpp"


quiz::quiz(std::vector<question> questions, std::string username, bool show_question_result, bool show_correct_answers) {

    (*this).username = username;
    (*this).questions = questions;
    (*this).show_correct_answers = show_correct_answers;
    (*this).show_question_result = show_question_result;

    max_score = questions.size();
    attempts = 0;
    best_score = 0;
}
quiz::quiz(std::vector<question> questions, std::string username) {

    (*this).username = username;
    (*this).questions = questions;

    max_score = questions.size();
    attempts = 0;
    best_score = -1;
    show_correct_answers = true;
    show_question_result = true;
}
void quiz::start() {
    
    int score = 0;
    attempts++;

    writeln("The quiz begins.\n");

    for (int i = 0; i < max_score; i++) {

        write("Question #"); writeln(i + 1); writeln("");
        
        score += questions[i].ask(show_question_result, show_correct_answers) ? 1 : 0;

        writeln("");
    }
    write("Well done.\nYou have scored ");
    write(score); write(" out of "); write(max_score); writeln(".");
    
    if (score > best_score) {

        writeln("This is your best score so far.\n");
        best_score = score;
    } else {

        write("Your best score so far is "); write(best_score); writeln(".\n");
    }
}