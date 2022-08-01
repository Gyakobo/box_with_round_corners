#include "headers/main.h"

using namespace std;

const int width = 1280, height = 720;

// Default Settings
#define _DEFAULT 			0

// Animations
#define ANIMATION_PARROT	1

// Games
#define SUDOKU				2 // F this shit
#define SNAKE				3
#define PONG				4
#define _R2048				5



// Current STATE
#define STATE _R2048 




int main()
{
	Window window("Box Simulator", width, height);

	Shader shader("shaders/vertex_shader.glsl", "shaders/fragment_shader.glsl", "shaders/geometric_shader.glsl");
	shader.enable();
	shader.setUniformMat4("ml_matrix", mat4::translation(vec3(-8, -8, 0.0f)));

	glViewport(0, 0, width, height);

	TileLayer layer(&shader);

#if STATE == _DEFAULT 
	Grid grid;
	grid.update();

	vector<Renderable2D *> sprites = grid.getRenderables();

#elif STATE == ANIMATION_PARROT
	Animation animation;
	animation.update();

	vector<Renderable2D *> sprites = animation.getRenderables();

#elif STATE == SUDOKU
	Sudoku sudoku;
	//sudoku.shrinking_square(); // Doesn't really work
	sudoku.update();

	vector<Renderable2D *> sprites = sudoku.getRenderables();

#elif STATE == SNAKE
	Snake snake;
	snake.Setup();
	snake.update();	

	vector<Renderable2D *> sprites = snake.getRenderables();

#elif STATE == PONG
	Pong pong(32, 32);
	pong.update();

	vector<Renderable2D *> sprites = pong.getRenderables();

#elif STATE == _R2048 
	R2048 r2048;
	r2048.update();

	vector<Renderable2D *> sprites = r2048.getRenderables();

#endif

	for (int i = 0; i < sprites.size(); i++)
		layer.add(sprites.at(i));

	float x, y;

	chrono::steady_clock::time_point begin = chrono::steady_clock::now();
	chrono::steady_clock::time_point end = begin;

	double elapsed_secs = 0.0f;

	while (!window.closed())
	{
		window.clear();

		if (window.isKeyPressed(GLFW_KEY_ESCAPE))
			break;

		// clear();
		// printf("x = %f, y = %f\n", x, y);

		// printf("time = %f\n", elapsed_secs);

		if (elapsed_secs >= 94000.0f) {
			layer.clean_slate();

#if STATE == _DEFAULT 
			// grid.Default_State();
			// grid.Random();
			grid.alpha_numeric_test();
			grid.update();

			vector<Renderable2D *> sprites = grid.getRenderables();

#elif STATE == ANIMATION_PARROT
			animation.party_parrot();
			animation.update();

			vector<Renderable2D *> sprites = animation.getRenderables();

#elif STATE == SUDOKU
			sudoku.set_problem();
			sudoku.update();
			
			vector<Renderable2D *> sprites = sudoku.getRenderables();

#elif STATE == SNAKE
			if (window.isKeyPressed(GLFW_KEY_W)) snake.w_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_A)) snake.a_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_S)) snake.s_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_D)) snake.d_key_pressed();

			snake.Draw();
			snake.update();
			snake.Input();
			snake.Logic();

			vector<Renderable2D *> sprites = snake.getRenderables();

#elif STATE == PONG
			if (window.isKeyPressed(GLFW_KEY_A)) pong.a_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_D)) pong.d_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_J)) pong.j_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_L)) pong.l_key_pressed();

			pong.Run();

			vector<Renderable2D *> sprites = pong.getRenderables();

#elif STATE == _R2048
			if (window.isKeyPressed(GLFW_KEY_Q)) r2048.q_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_W)) r2048.w_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_A)) r2048.a_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_S)) r2048.s_key_pressed();
			if (window.isKeyPressed(GLFW_KEY_D)) r2048.d_key_pressed();

			r2048.printUI();
			r2048.update();

			vector<Renderable2D *> sprites = r2048.getRenderables();

#endif

			for (int i = 0; i < sprites.size(); i++)
				layer.add(sprites.at(i));

			begin = chrono::steady_clock::now();
		}

		shader.enable();

		end = chrono::steady_clock::now();
		elapsed_secs = chrono::duration_cast<chrono::microseconds>(end - begin).count() * 1.0f;

		window.getMousePosition(x, y);

		shader.enable();
		layer.render();

		window.update();
	}

	return 0;
}
