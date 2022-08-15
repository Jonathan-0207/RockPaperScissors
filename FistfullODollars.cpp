#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
    set_player_name("FistfullODollars"); 
    state = 0; 
}

char FistfullODollars::makeMove(){
    switch(state){
        case 3: state = 0; 
        case 0: currentMove = 'R';
        break;
        case 1: currentMove = 'P';
        break;
        case 2: currentMove = 'P'; 
        
    }

    state++; 
    return currentMove; 
}