#include "Question.h"

Question::Question(std::string text, int level,
		std::vector<std::string> answers, int rAnswer) {
	Question::text = text;
	Question::level = level;
	Question::answers = answers;
	Question::rightAnswer = rAnswer;
}

std::string Question::show(){
	std::string sum;
	sum += level;
	sum += ": "  + text + "\n";
	for(int i = 0; i < answers.size(); i++){
		sum += answers.at(i) + "\n";
	}
	return sum;
}

