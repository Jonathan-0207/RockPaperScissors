#include "Crescendo.h"

Crescendo::Crescendo(){
    set_player_name("Crescendo"); 
    state = 0; 
}

char Crescendo::makeMove(){ 
    switch(state){
        case 3: state = 0; 
        case 0: currentMove = 'P';
        break;
        case 1: currentMove = 'S';
        break;
        case 2: currentMove = 'R'; 
        
    }

    state++; 
    return currentMove; 
}