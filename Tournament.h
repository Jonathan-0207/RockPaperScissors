#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <array>
#include "Referee.h"

class Tournament : public Referee{
    public:
        Player* run(std::array<Player*, 8> competitors); 
        

}; 


#endif
