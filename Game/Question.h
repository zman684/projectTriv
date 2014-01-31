/*
 * Questions.h
 *
 *  Created on: Jan 27, 2014
 *      Author: shikuma
 */
#include <iostream>
#include <vector>
#ifndef QUESTION_H_
#define QUESTION_H_

class Question {
private:
	std::string text;
	int level;
	std::vector<std::string> answers;
	int rightAnswer;

public:
	Question(std::string text, int level, std::vector<std::string> answers,
			int rAnswer);
	std::string show();
        std::string getAnswer();
        int getLevel();
};

#endif /* QUESTION_H_ */
