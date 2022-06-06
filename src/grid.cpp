#include "../headers/grid.h"

Grid::Grid() {
    srand(time(NULL));

    vec3 v1 = vec3(0.0f, 0.0f, 0.0f);
    vec3 v2 = vec3(0.5f, 0.0f, 0.0f);
    vec3 v3 = vec3(0.5f, 0.5f, 0.0f);
    vec3 v4 = vec3(0.0f, 0.5f, 0.0f);

    float space_offset = 0.1f;

    for (float x=0; x<16; x+=0.5f) {
        for (float y=0; y<16; y+=0.5f) {
            vec4 color = RAND_COLOR;

            sprites.push_back(new Sprite(v1+vec3(x, y, 0), v2+vec3(x, y, 0)-vec3(space_offset, 0, 0), v3+vec3(x, y, 0)-vec3(space_offset, space_offset, 0), color));
            sprites.push_back(new Sprite(v1+vec3(x, y, 0), v4+vec3(x, y, 0)-vec3(0, space_offset, 0), v3+vec3(x, y, 0)-vec3(space_offset, space_offset, 0), color));
            
        }
    }
}

void Grid::Pong() {

}

