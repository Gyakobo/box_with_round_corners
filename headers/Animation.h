#ifndef ANIMATION_H
#define ANIMATION_H

#include "grid.h"
#include "../Animations/Party_Parrot/party_parrot.h"

class Animation : public Grid {
private:
    vector<Renderable2D*> sprites = {};
	vector<vector<vec4>> sprite;
    void DrawOnScreen(int& x, int& y, const vec4& color) {
            sprite.at(x).at(y) = color;
    }


public:
    Animation();
    void party_parrot(int& n);
};


#endif
