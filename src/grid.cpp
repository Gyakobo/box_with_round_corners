#include "../headers/grid.h"

Grid::Grid() {
    vector<vec4> row_color;
    const vec4 color = DEFAULT;

    for (int i=0; i<32; i++) {
        row_color.push_back(color);
    }
    for (int i=0; i<32; i++) {
        this->color.push_back(row_color);
    }



    for (int x=0; x<32; x++) {
        for (int y=0; y<32; y++) {
            DrawOnScreen(x, y, color);
        }
    }

}

void Grid::DrawOnScreen(int& x, int& y, const vec4& color) {
    this->color.at(x).at(y) = color;
}

void Grid::update() {
    sprites = {};
    
    const vec3 v1 = vec3(0.0f, 0.0f, 0.0f);
    const vec3 v2 = vec3(0.5f, 0.0f, 0.0f);
    const vec3 v3 = vec3(0.5f, 0.5f, 0.0f);
    const vec3 v4 = vec3(0.0f, 0.5f, 0.0f);

    int i=0, j=0;

    float space_offset = 0.1f;
    
    for (float x=0; x<16; x+=0.5f) {
        for (float y=0; y<16; y+=0.5f) {
            vec4 m_color = color.at(i).at(j);

            sprites.push_back(new Sprite(v1+vec3(x, y, 0), v2+vec3(x, y, 0)-vec3(space_offset, 0, 0), v3+vec3(x, y, 0)-vec3(space_offset, space_offset, 0), m_color));
            sprites.push_back(new Sprite(v1+vec3(x, y, 0), v4+vec3(x, y, 0)-vec3(0, space_offset, 0), v3+vec3(x, y, 0)-vec3(space_offset, space_offset, 0), m_color));

            j++; 
        }

        i++;
        j=0;
    }
}

void Grid::Default_State() {
    randomize();

    vector<vec4> row_color;
    vec4 color;
    double alpha = 1.0f;

    for (int i=0; i<32; i++) {
        row_color.push_back(DEFAULT);
    }
    for (int i=0; i<32; i++) {
        this->color.push_back(row_color);
    }
    
    
    for (int x=0; x<32; x++) {
        for (int y=0; y<32; y++) {
            alpha = rand()%1000/1000.0f;
            color = vec4(255*alpha, 0, 0, 1);
            DrawOnScreen(x, y, color);
        }
    }
}

void Grid::Random() {
    randomize();

    vector<vec4> row_color;
    vec4 color;

    for (int i=0; i<32; i++) {
        row_color.push_back(DEFAULT);
    }
    for (int i=0; i<32; i++) {
        this->color.push_back(row_color);
    }


    for (int x=0; x<32; x++) {
        for (int y=0; y<32; y++) {
            color = RANDOM_COLOR;
            DrawOnScreen(x, y, color);
        }
    }
}

void randomize() {
    uint32_t seed=0;
    FILE *devrnd = fopen("/dev/random", "r");
    fread(&seed, 4, 1, devrnd);
    fclose(devrnd);
    srand(seed);
}



