#include <iostream>
#include <fstream>
#include "player/Player.h"
#include "trivia/Question.h"

Player p;

void start() {
	std::string name;
	std::cout << "Please enter your name: ";
	std::cin >> name;
	p.setName(name);
	std::cout << "\n" << "Welcome " << name << "!" << std::endl;
//	std::cout << p.toString();
}

std::vector<Question> getQuestions(std::string path) {
	std::string line;
	std::vector<Question> q;
	std::ifstream myfile(path);
	//4 steps for con
	std::string sum;
	std::string text;
	int level = 0;
	std::vector<std::string> answers;
	int rAnswer = 0;
	//counter
	int count = 0;
	if (myfile.is_open()) {
		while (std::getline(myfile, line)) {
			for (int i = 0; i < line.length(); i++) {
				if (line.at(i) == '[') {/*do nothing*/
				} else if (line.at(i) == '/' || line.at(i) == ']') {
					answers.push_back(sum);
					std::cout << sum << std::endl;
					sum = "";
				} else if (line.at(i) == ',') {
					if (count == 0) {
						text = sum;
						std::cout << sum << std::endl;
					} else if (count == 1) {
						level = atoi(sum.c_str());
						std::cout << sum << std::endl;
					} else if (count == 2) {
					} else if (count == 3) {
						rAnswer = atoi(sum.c_str());
						std::cout << sum << std::endl;
					}
					count++;
					sum = "";
				} else {
					sum += line.at(i);
				}
			}
			Question a(text, level, answers, rAnswer);
			q.push_back(a);
		}
		myfile.close();
	}

	return q;
}

int main() {
//	start();
	std::vector<Question> b;
	b = getQuestions("trivia/level1");
	return 0;
}
