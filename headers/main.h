#ifndef MAIN_H
#define MAIN_H

// Basics 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <cstdint>

// Time
#include <ctime>
#include <chrono>
#include <sys/time.h>

// Defines
//#define clear() printf("\033[H\033[J")

// Window
#include "Window.h"

// Math
#include "mat4.h"
#include "vec2.h"
#include "vec3.h"
#include "vec4.h"

// Renderers
#include "Shader.h"
#include "BatchRenderer2D.h"
#include "sprite.h"
#include "Renderable2D.h"
#include "Renderer2D.h"
#include "Buffer.h"
#include "VertexArray.h"
#include "IndexBuffer.h"
#include "tilelayer.h"
#include "Layer.h"
#include "SimplexNoise.h"

// Box_with_round_corners
#include "grid.h"
#include "Animation.h"
#include "../arcade_games/headers/sudoku.h"
#include "../arcade_games/headers/snake.h"
#include "../arcade_games/headers/pong.h"
#include "../arcade_games/headers/r2048.h"
#include "../arcade_games/headers/game_of_life.h"
#include "../arcade_games/headers/Clock.h"


// Example Object
#include "Sample_Object.h"

#endif
