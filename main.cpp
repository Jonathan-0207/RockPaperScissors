#include "Tournament.h"
#include <iostream> 
#include <array> 

int main(){
    Avalanche* player8 = new Avalanche; 
    Bureaucrat* player7 = new Bureaucrat; 
    Bureaucrat* player6 = new Bureaucrat; 
    Toolbox* player5 = new Toolbox; 
    Toolbox* player4 = new Toolbox; 
    Crescendo* player3 = new Crescendo; 
    Crescendo* player2 = new Crescendo; 
    FistfullODollars* player1 = new FistfullODollars; 

    RandomComputer randomPlayer; 

    std::cout << randomPlayer.makeMove(); 

    Referee ref; 

    Tournament t1; 

    //std::array<Player*, 8> competitors = {player1, player2, player3, player4, player5, player6, player7, player8};

    new Avalanche; 
    Referee RefereeThing; 

    //std::cout << t1.run(competitors) << std::endl; 

}