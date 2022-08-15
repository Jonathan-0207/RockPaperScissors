#include "PaperDoll.h"

PaperDoll::PaperDoll(){
    set_player_name("PaperDoll"); 
    state = 0; 
}

char PaperDoll::makeMove(){
    switch(state){
        case 3: state = 0; 
        case 0: currentMove = 'P';
        break;
        case 1: currentMove = 'S';
        break;
        case 2: currentMove = 'S'; 
        
    }

    state++; 
    return currentMove; 
}