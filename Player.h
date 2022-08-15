#ifndef PLAYER_H
#define PLAYER_H 

#include <string> 

class Player{
    private:
        std::string player_name;
    public:
        virtual char makeMove() = 0;
        void set_player_name(std::string new_name); 
        std::string return_name(); 

}; 

#endif