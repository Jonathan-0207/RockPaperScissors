#include "Referee.h"
#include <iostream> 

Player* Referee::refGame(Player* player1, Player* player2){
    Player* Winner; 
    int player1_score = 0;
    int player2_score = 0;


    char p2_move = player2->makeMove(); 
    char p1_move = player1->makeMove();


    for(int count = 0; count < 5; count++){

        if(p1_move == 'R' && p2_move == 'P'){
            player2_score++; 
        }
        else if(p1_move == 'P' && p2_move == 'S'){
            player2_score++; 
        }
        else if(p1_move == 'S' && p2_move == 'R'){
            player2_score++; 
        }
        else if(p1_move == 'R' && p2_move == 'S'){
            player1_score++; 
        }
        else if(p1_move == 'P' && p2_move == 'R'){
            player1_score++; 
        }
        else if(p1_move == 'S' && p2_move == 'P'){
            player1_score++; 
        }
        
        else{
            continue;
        }
    }

    if(player2_score > player1_score){Winner = player2;}
    if(player1_score > player2_score){Winner = player1;}
    if(player2_score == player1_score){Winner = player1;}

    //std::cout << player2_score << std::endl; 
    //std::cout << Winner->return_name() << std::endl; 

    return Winner; 
}
