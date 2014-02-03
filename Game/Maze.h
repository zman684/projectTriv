/* 
 * File:   Maze.h
 * Author: shikuma
 *
 * Created on February 1, 2014, 7:09 PM
 */
#include <iostream>
#include <vector>//needed to import
#ifndef MAZE_H
#define	MAZE_H

//no ()
class Maze{//this file is only to declare functions
    
private:
    std::string question(int level);
    std::string powerUp;
    
public://no std::char
    std::vector<char> map;
    std::string character;
    
    
};
//needed endif
#endif /* MAZE_H */