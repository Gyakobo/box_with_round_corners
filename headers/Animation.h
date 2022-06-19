#ifndef ANIMATION_H
#define ANIMATION_H

#include "grid.h"
#include "../Animations/Party_Parrot/party_parrot.h"

class Animation : public Grid {
private:

public:
    Animation();
    virtual void party_parrot();
};


#endif
