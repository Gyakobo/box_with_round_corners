#include "../headers/grid.h"

Grid::Grid()
{
    vector<vec4> row_color;
    const vec4 color = DEFAULT;

    for (int i = 0; i < 32; i++)
    {
        row_color.push_back(color);
    }
    for (int i = 0; i < 32; i++)
    {
        sprite.push_back(row_color);
    }

    for (int x = 0; x < 32; x++)
    {
        for (int y = 0; y < 32; y++)
        {
            DrawOnScreen(x, y, color);
        }
    }
}

void Grid::DrawOnScreen(int &x, int &y, const vec4 &color)
{
    sprite.at(x).at(y) = color;
}


void Grid::update()
{
    sprites = {};

    const vec3 v1 = vec3(0.0f, 0.0f, 0.0f);
    const vec3 v2 = vec3(0.5f, 0.0f, 0.0f);
    const vec3 v3 = vec3(0.5f, 0.5f, 0.0f);
    const vec3 v4 = vec3(0.0f, 0.5f, 0.0f);

    int i = 0, j = 0;

    float space_offset = 0.1f;

    for (float x = 0; x < 16; x += 0.5f)
    {
        for (float y = 0; y < 16; y += 0.5f)
        {
            vec4 m_color = sprite.at(i).at(j);

            sprites.push_back(new Sprite(v1 + vec3(x, y, 0), v2 + vec3(x, y, 0) - vec3(space_offset, 0, 0), v3 + vec3(x, y, 0) - vec3(space_offset, space_offset, 0), m_color));
            sprites.push_back(new Sprite(v1 + vec3(x, y, 0), v4 + vec3(x, y, 0) - vec3(0, space_offset, 0), v3 + vec3(x, y, 0) - vec3(space_offset, space_offset, 0), m_color));

            j++;
        }

        i++;
        j = 0;
    }

}

void Grid::Default_State()
{
    grid::randomize();

    //vector<vec4> row_color;
    vec4 color;
    double alpha = 1.0f;

    for (int x = 0; x < 32; x++)
    {
        for (int y = 0; y < 32; y++)
        {
            alpha = rand() % 1000 / 1000.0f;
            color = vec4(255 * alpha, 0, 0, 1);
            DrawOnScreen(x, y, color);
        }
    }
}

void Grid::alpha_numeric_test()
{
    //vector<vec4> row_color;
    vec4 color;

    int y_ = 0;
    int x_ = 0;

    int next_numbers = 0;

    short int numb_width = 0;
    bool change_color = true;

    int quantity_of_nums = 4;

    /*for (int character = 0; character < quantity_of_nums; character++) {
        for (int x = 0; x < su_number[character].at(0).size(); x++) {
            for (int y = 0; y < 3; y++)
            {
                y_ = 8 * 4 - 1 - y;

                x_ = x + numb_width;
                // x_ = x + character * 4;

                if (su_number.at(character).at(y).at(x) && change_color)
                    DrawOnScreen(x_, y_, WHITE);
                else if (su_number.at(character).at(y).at(x) && !change_color)
                    DrawOnScreen(x_, y_, RED);
                else
                    DrawOnScreen(x_, y_, BLACK);
            }
        }
        if (character == 2 || character == 5)
            numb_width += su_number[character].at(0).size() + 3;
        else 
            numb_width += su_number[character].at(0).size() + 0;
        
        // numb_width += su_number[character].at(0).size() + 0;
        change_color = !change_color;
    }*/

    for (int character = 0; character < quantity_of_nums; character++) {
        for (int x = 0; x < su_number[character].at(0).size(); x++) {
            for (int y = 0; y < 3; y++)
            {
                y_ = 8 * 4 - 1 - y;

                x_ = x + numb_width;
                // x_ = x + character * 4;

                if (su_number.at(character).at(y).at(x) && change_color)
                    DrawOnScreen(x_, y_, WHITE);
                else if (su_number.at(character).at(y).at(x) && !change_color)
                    DrawOnScreen(x_, y_, RED);
                else
                    DrawOnScreen(x_, y_, BLACK);
            }
        }
        if (character == 2 || character == 5)
            numb_width += su_number[character].at(0).size() + 3;
        else 
            numb_width += su_number[character].at(0).size() + 0;
        
        // numb_width += su_number[character].at(0).size() + 0;
        change_color = !change_color;
    }

}

void Grid::Random()
{
    grid::randomize();

    //vector<vec4> row_color;
    vec4 color;

    for (int x = 0; x < 32; x++)
    {
        for (int y = 0; y < 32; y++)
        {
            color = RANDOM_COLOR;
            DrawOnScreen(x, y, color);
        }
    }

}

namespace grid { 
    void randomize() {
		uint32_t seed = 0;
		FILE *devrnd = fopen("/dev/random", "r");
		fread(&seed, 4, 1, devrnd);
		fclose(devrnd);
		srand(seed);
    }

    int rand_range(int start, int end) {
        int range = end - start + 1;
        return (rand() % range) + start;
    }
}
