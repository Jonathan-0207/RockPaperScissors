#include "RandomComputer.h"
#include <random>
#include <iostream>

RandomComputer::RandomComputer(){
    set_player_name("RandomCompuetr");
}

char RandomComputer::makeMove(){
    srand(time(NULL));
    
    char moves[3] = {'R', 'P', 'S'};
    int randomNumber; 

    randomNumber = rand() % 3; 

    std::cout << moves[randomNumber] << std::endl; 
    return moves[randomNumber]; 
}