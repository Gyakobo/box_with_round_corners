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
    randomize();

    vector<vec4> row_color;
    vec4 color;
    double alpha = 1.0f;

    for (int i = 0; i < 32; i++)
    {
        row_color.push_back(DEFAULT);
    }
    for (int i = 0; i < 32; i++)
    {
        sprite.push_back(row_color);
    }

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
    vector<vec4> row_color;
    vec4 color;

    for (int i = 0; i < 32; i++)
    {
        row_color.push_back(DEFAULT);
    }
    for (int i = 0; i < 32; i++)
    {
        sprite.push_back(row_color);
    }

    int y_ = 0;
    int x_ = 0;

    int next_numbers = 0;

    /*for (int y_increment=0; y_increment<9; y_increment+=8) {
        for (int numb=0; numb<6; numb++) {
            for (int x=0; x<4; x++) {
                for (int y=0; y<7; y++) {
                    color = RANDOM_COLOR;
                    y_ = 8*4 - 1 - (y+y_increment);
                    x_ = x + numb*5;
                    if (numb+next_numbers < 10)
                        DrawOnScreen(x_, y_, letter.at(numb+next_numbers).at(y).at(x));
                }
            }
        }
        next_numbers += 6;
    }*/

    unsigned short int numb_width = 0;
    bool change_color = true;

    for (int character = 0; character < 9; character++)
    {
        for (int x = 0; x < small_number[character].at(0).size(); x++)
        {
            for (int y = 0; y < 4; y++)
            {
                y_ = 8 * 4 - 1 - y;

                x_ = x + numb_width;
                // x_ = x + character * 5;

                if (small_number.at(character).at(y).at(x) && change_color)
                    DrawOnScreen(x_, y_, WHITE);

                else if (small_number.at(character).at(y).at(x) && !change_color)
                    DrawOnScreen(x_, y_, RED);
                else
                    DrawOnScreen(x_, y_, BLACK);
            }
        }
        numb_width += small_number[character].at(0).size() + 1;
        change_color = !change_color;
    }
}

void Grid::Random()
{
    randomize();

    vector<vec4> row_color;
    vec4 color;

    for (int i = 0; i < 32; i++)
    {
        row_color.push_back(DEFAULT);
    }
    for (int i = 0; i < 32; i++)
    {
        sprite.push_back(row_color);
    }

    for (int x = 0; x < 32; x++)
    {
        for (int y = 0; y < 32; y++)
        {
            color = RANDOM_COLOR;
            DrawOnScreen(x, y, color);
        }
    }
}

void randomize()
{
    uint32_t seed = 0;
    FILE *devrnd = fopen("/dev/random", "r");
    fread(&seed, 4, 1, devrnd);
    fclose(devrnd);
    srand(seed);
}
