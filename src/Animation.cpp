#include "../headers/Animation.h"

Animation::Animation() {

}

void Animation::party_parrot(int& n) {
    vector<vec4> row_color;
    vec4 color;

    for (int i=0; i<32; i++) {
        row_color.push_back(DEFAULT);
    }
    for (int i=0; i<32; i++) {
        sprite.push_back(row_color);
    }

    int y_;

    for (int x=0; x<32; x++) {
        for (int y=0; y<32; y++) {
            // Beak
            y_ = 8*4 - 1 - y;
            if(parrot[n][y_][x] == c1)
                color = vec4(134, 230, 0, 1);

            // Parrot Skin
            if(parrot[n][y_][x] == c2)
                color = parrot_color[n];

            // Dark Background
            if(parrot[n][y_][x] == c0)
                color = vec4(0, 0, 0, 1);

            DrawOnScreen(x, y, color);
        }
    }

}
