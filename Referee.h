#include "RandomComputer.h"

#ifndef REFEREE_H
#define REFEREE_H


class Referee : public Bureaucrat{
    public:
        Player* refGame(Player* player1, Player* player2); 
};

#endif