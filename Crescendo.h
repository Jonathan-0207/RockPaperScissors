#ifndef CRESCENDO_H
#define CRESCENDO_H 

#include "Toolbox.h"

class Crescendo : public Toolbox{
    private:
        int state; 
    public:
        Crescendo(); 
        char makeMove(); 


}; 

#endif