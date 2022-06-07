#include "headers/main.h"

using namespace std;

const int width = 1280, height = 720;

int main() {
	Window window("Box Simulator", width, height);

	Shader shader("shaders/vertex_shader.glsl", "shaders/fragment_shader.glsl", "shaders/geometric_shader.glsl");
	shader.enable();
	shader.setUniformMat4("ml_matrix", mat4::translation(vec3(-8, -8, 0.0f)));

	glViewport(0, 0, width, height);

	Grid grid;
	grid.update();
	TileLayer layer(&shader);
	vector<Renderable2D*> sprites = grid.getRenderables();
	for (int i=0; i<sprites.size(); i++) layer.add(sprites.at(i));

	float x, y;
	
	chrono::steady_clock::time_point begin = chrono::steady_clock::now();	
	chrono::steady_clock::time_point end = begin;	

	while (!window.closed()) {
		window.clear();

		if (window.isKeyPressed(GLFW_KEY_ESCAPE)) break;

		//clear();
		//printf("x = %f, y = %f\n", x, y);

		end = chrono::steady_clock::now();
		double elapsed_secs = chrono::duration_cast<chrono::microseconds>(end - begin).count() / 1000000.0;
		//begin = end;

		//printf("time = %f\n", elapsed_secs);

		shader.enable();

		window.getMousePosition(x, y);

		shader.enable();
		layer.render();

		window.update();

	}	

	return 0;
}



