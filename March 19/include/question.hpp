#pragma once
#include <string>
#include <vector>
#include "write_read.hpp"

class question {

    std::string text;
    int correct_option_index;
    std::vector<std::string> options;

public:

    question(std::string text, int correct_option_index, std::vector<std::string> options);
    bool ask(bool show_result, bool show_correct_answer);
};