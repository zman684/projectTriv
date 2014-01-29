#include <iostream>
#include <fstream>
#include "Player.h"
#include "Question.h"

Player p;
std::vector<Question> questions;

void start() {
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    p.setName(name);
    std::cout << "\n" << "Welcome " << name << "!" << std::endl;
}

void getQuestions(std::string path) {
    std::string line;
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
                    sum = "";
                } else if (line.at(i) == ',') {
                    if (count == 0) {
                        text = sum;
                    } else if (count == 1) {
                        level = atoi(sum.c_str());
                    } else if (count == 2) {
                    } else if (count == 3) {
                        rAnswer = atoi(sum.c_str());
                    }
                    count++;
                    sum = "";
                } else {
                    sum += line.at(i);
                }
            }
            Question a(text, level, answers, rAnswer);
            questions.push_back(a);
        }
        myfile.close();
    }

}

int main() {
    //	start();
    getQuestions("level1.txt");
    std::cout << questions.at(0).show();
    return 0;
}
