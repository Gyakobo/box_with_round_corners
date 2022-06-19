#ifndef ANIMATION_H
#define ANIMATION_H

#include "grid.h"
#include "../Animations/Party_Parrot/party_parrot.h"

class Animation : public Grid {
private:
    vector<vec4> parrot_color = {
        vec4(255, 95, 91, 1),
        vec4(255, 196, 82, 1),
        vec4(88, 255, 90, 1),
        vec4(90, 251, 255, 1),
        vec4(88, 156, 255, 1),
        vec4(235, 67, 255, 1),
        vec4(249, 97, 255, 1),
        vec4(235, 67, 255, 1),
        vec4(255, 58, 172, 1),
        vec4(57, 59, 255, 1)
    };


public:
    Animation();
    void party_parrot(int& n);
};


#endif
