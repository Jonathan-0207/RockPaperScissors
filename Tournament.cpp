#include "Tournament.h"
#include <array> 
#include <iostream>

Player* Tournament::run(std::array<Player*, 8> competitors){
    std::array<Player*, 7> winners_queue; 
    int queue_count = 0; 
    
    for(int numCount = 0; numCount < 8; numCount+=2){
        winners_queue.at(6-queue_count) = Referee::refGame(competitors.at(numCount+1), competitors.at(numCount)); 
        std::cout << 6-queue_count << std::endl; 
        queue_count++; 
        
    }   
    
    for(int numCount = 3; numCount < 6; numCount+=2){
        winners_queue.at(6-queue_count) = Referee::refGame(winners_queue.at(numCount+1), winners_queue.at(numCount)); 
        std::cout << 6-queue_count << std::endl; 
        queue_count++; 
        
    }
    
    winners_queue.at(0) = Referee::refGame(winners_queue[1], winners_queue[2]);

    std::cout << winners_queue[6]->return_name() << std::endl <<  winners_queue[5]->return_name() << std::endl;
    std::cout << winners_queue[4]->return_name() << std::endl <<  winners_queue[3]->return_name() << std::endl; 
    //std::cout << winners_queue[2]->return_name() << std::endl <<  winners_queue[1]->return_name() << std::endl; 
    //std::cout << winners_queue[0]->return_name() << std::endl; 

    return winners_queue.at(0); 

}


