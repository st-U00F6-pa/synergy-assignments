#pragma once
#include <vector>
#include <string>
#include "question.hpp"

class quiz {

    int max_score;
    std::vector<question> questions;

public:

    int best_score;
    int attempts;
    std::string username;
    bool show_question_result;
    bool show_correct_answers;

    quiz(std::vector<question> questions, std::string username);
    quiz(std::vector<question> questions, std::string username, bool show_question_result, bool show_correct_answers);
    void start();
};