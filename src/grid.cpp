#include "../headers/grid.h"

Grid::Grid(int width=4, int height=4) {
    this->width     = width; 
    this->height    = height; 
    
    srand(time(NULL));

    vec3 v1 = vec3(0.0f, 0.0f, 0.0f);
    vec3 v2 = vec3(15.0f, 0.0f, 0.0f);
    vec3 v3 = vec3(15.0f, 15.0f, 0.0f);
    vec3 v4 = vec3(0.0f, 15.0f, 0.0f);

    //for (int i=0; i<width; i++) {
        //for (int j=0; j<height; j++) {
            for (int x=0; x<120; x+=15) {
                for (int y=0; y<120; y+=15) {
                    vec4 color = RAND_COLOR;
                    sprites.push_back(new Sprite(v1+vec3(x, y, 0), v2+vec3(x, y, 0), v3+vec3(x, y, 0), color));
                    sprites.push_back(new Sprite(v1+vec3(x, y, 0), v4+vec3(x, y, 0), v3+vec3(x, y, 0), color));
                }
            }
        //}
    //} 
}

void Grid::Pong() {

}

