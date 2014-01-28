/*
 * Player.h
 *
 *  Created on: Jan 27, 2014
 *      Author: shikuma
 */
#include <iostream>
#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
private:
	std::string name;
	double score;
public:
	Player(std::string name);
	Player();
	void setName(std::string name);
	std::string toString();
};

#endif /* PLAYER_H_ */
