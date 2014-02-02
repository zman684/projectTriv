/* 
 * File:   Maze.h
 * Author: shikuma
 *
 * Created on February 1, 2014, 7:09 PM
 */

#include <iostream>
#include <fstream>
#ifndef MAZE_H
#define	MAZE_H

class Maze(){
    
private:
    std::string question(int level);
    std::string powerUp;
    
public:
    std::vector<std::char> map;
    std::string character;
    
    
}