#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include "Crescendo.h"

class PaperDoll : public Crescendo{
    private:
        int state; 
    public:
        PaperDoll(); 
        char makeMove(); 


}; 

#endif