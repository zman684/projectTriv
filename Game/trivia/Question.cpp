#include "Question.h"

Question::Question(std::string text, int level,
		std::vector<std::string> answers, int rAnswer) {
	Question::text = text;
	Question::level = level;
	Question::answers = answers;
	Question::rightAnswer = rAnswer;
}

