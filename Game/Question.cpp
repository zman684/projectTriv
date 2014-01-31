#include "Question.h"
#include "Player.h"
#include <sstream>

Question::Question(std::string text, int level,
        std::vector<std::string> answers, int rAnswer) {
    Question::text = text;
    Question::level = level;
    Question::answers = answers;
    Question::rightAnswer = rAnswer;
}

std::string Question::show() {
    std::string sum;
    std::stringstream temp;
    temp << level;
    sum += temp.str();
    sum += ": " + text + "\n";
    for (int i = 0; i < answers.size(); i++) {
        sum += answers.at(i) + "\n";
    }
    return sum;
}

std::string Question::getAnswer(){
    return Question::answers.at(Question::rightAnswer);
}

int Question::getLevel(){
    return Question::level;
}