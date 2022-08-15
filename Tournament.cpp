#include "Tournament.h"
#include <array> 
#include <iostream>

Player* Tournament::run(std::array<Player*, 8> competitors){
    Player* winners_queue[7];  
    int queue_count = 0; 
    
    for(int numCount = 0; numCount < 8; numCount+=2){
        winners_queue[6-queue_count] = Referee::refGame(competitors.at(numCount), competitors.at(numCount+1)); 
        queue_count++; 
    }   
    
    for(int numCount = 3; numCount < 4; numCount+=2){
        winners_queue[6-queue_count] = Referee::refGame(winners_queue[numCount], winners_queue[numCount+1]); 
        queue_count++; 
    }
    
    winners_queue[0] = Referee::refGame(winners_queue[1], winners_queue[2]);

    //std::cout << winners_queue[6]->return_name() << std::endl <<  winners_queue[5]->return_name() << std::endl;
    //std::cout << winners_queue[4]->return_name() << std::endl <<  winners_queue[3]->return_name() << std::endl; 
    //std::cout << winners_queue[2]->return_name() << std::endl <<  winners_queue[1]->return_name() << std::endl; 
    std::cout << winners_queue[0]->return_name() << std::endl; 

    return winners_queue[0]; 

}


