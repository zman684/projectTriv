#include <iostream>
#include "player/Player.h"
#include "trivia/Question.h"

Player p;

void start(){
	std::string name;
	std::cout << "Please enter your name: ";
	std::cin >> name;
	p.setName(name);
	std::cout << "\n" << "Welcome " << name << "!" << std::endl;
	std::cout << p.toString();
}

int main(){
	start();
	return 0;
}
