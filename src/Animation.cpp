#include "../headers/Animation.h"

Animation::Animation() {
    vector<vec4> row_color;

    for (int i=0; i<32; i++) {
        row_color.push_back(DEFAULT);
    }
    for (int i=0; i<32; i++) {
        sprite.push_back(row_color);
    }
}

void Animation::party_parrot() {
    vec4 color;
    int y_;

    for (int x=0; x<32; x++) {
        for (int y=0; y<32; y++) {
            // Beak
            y_ = 8*4 - 1 - y;
            if(parrot[parrot_color_n][y_][x] == c1)
                color = vec4(0.5, 0.8641, 0, 1);

            // Parrot Skin
            if(parrot[parrot_color_n][y_][x] == c2)
                color = parrot_color[parrot_color_n];

            // Dark Background
            if(parrot[parrot_color_n][y_][x] == c0)
                color = vec4(0, 0, 0, 1);

            DrawOnScreen(x, y, color);
        }
    }

    parrot_color_n++;
    if (parrot_color_n > 9) parrot_color_n = 0;
}

void Animation::broken_party_parrot() {
    vec4 color;
    int y_;

    for (int x=0; x<32; x++) {
        for (int y=0; y<32; y++) {
            // Beak
            y_ = 8*4 - 1 - y;
            if(parrot[parrot_color_n][y_][x] == c1)
                color = vec4(0.5, 0.8641, 0, 1);

            // Parrot Skin
            if(parrot[parrot_color_n][y_][x] == c2)
                color = parrot_color[parrot_color_n];

            // Dark Background
            if(parrot[parrot_color_n][y_][x] == c0)
                color = vec4(0, 0, 0, 1);

            parrot_color_n++;
            if (parrot_color_n > 9) parrot_color_n = 0;

            DrawOnScreen(x, y, color);
        }
    }

}
