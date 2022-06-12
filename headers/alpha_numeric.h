#ifndef ALPHA_NUMERIC_H
#define ALPHA_NUMERIC_H


// Colors
#define WHITE			vec4(255, 255, 255, 1)
#define BLACK			vec4(0, 0, 0, 1)
#define DEFAULT			BLACK	
#define RED				vec4(255, 0, 0, 1)
#define GREEN			vec4(0, 255, 0, 1)
#define BLUE			vec4(0, 0, 255, 1)
#define RANDOM_COLOR	vec4(rand()%1000/1000.0f, rand()%1000/1000.0f, rand()%1000/1000.0f, 1)


// Sprites of numbers
#define vector<vector<vec4>> number_1 = 
{   { BLACK,WHITE,BLACK }, 
    { WHITE,WHITE,BLACK },
    { BLACK,WHITE,BLACK },
    { BLACK,WHITE,BLACK },
    { BLACK,WHITE,BLACK },
    { BLACK,WHITE,BLACK },
    { WHITE,WHITE,WHITE }
}

#define vector<vector<vec4>> number_2
#define vector<vector<vec4>> number_3
#define vector<vector<vec4>> number_4
#define vector<vector<vec4>> number_5
#define vector<vector<vec4>> number_6
#define vector<vector<vec4>> number_7
#define vector<vector<vec4>> number_8
#define vector<vector<vec4>> number_9
#define vector<vector<vec4>> number_0


#endif
