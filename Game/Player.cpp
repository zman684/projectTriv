#include "Player.h"

Player::Player(){
	Player::name = "";
	Player::score = 0;
}

Player::Player(std::string name){
	Player::name = name;
	Player::score = 0;
}

void Player::setName(std::string s){
	Player::name = s;
}

std::string Player::toString(){
	std::string sum;
	sum += Player::name + "\n";
//	sum += std::to_string(Player::score) + "\n";
	return sum;
}

void Player::addScore(int score){
    Player::score += score;
}

std::string Player::getScore(){
    return std::to_string(Player::score);
}