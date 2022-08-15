#include "Human.h"

#include <iostream> 


char Human::makeMove(){

    char decision;

    std::cout << "Enter move: "; 

    std::cin >> decision; 

    std::cout << std::endl; 


    return decision; 

}


