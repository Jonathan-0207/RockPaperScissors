#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H

#include "PaperDoll.h"

class FistfullODollars : public PaperDoll{
    private:
        int state; 
        char currentMove; 
    public:
        FistfullODollars(); 
        char makeMove(); 


}; 

#endif