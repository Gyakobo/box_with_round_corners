#include "headers/main.h"

using namespace std;

const int width = 800, height = 800;

int main() {
	Window window("Box Simulator", width, height);

	Shader shader("shaders/vertex_shader.glsl", "shaders/fragment_shader.glsl", "shaders/geometric_shader.glsl");
	shader.enable();
	shader.setUniformMat4("ml_matrix", mat4::translation(vec3(-150.0f, 0.0f, -105.0f)));

	//glViewport(0, 0, width, height);

	Grid grid(1, 1);
	TileLayer layer(&shader);
	vector<Renderable2D*> sprites = grid.getRenderables();
	for (int i=0; i<sprites.size(); i++) layer.add(sprites.at(i));


	float x, y;

	while (!window.closed()) {
		window.clear();

		if (window.isKeyPressed(GLFW_KEY_ESCAPE)) break;

		//clear();
		//printf("x = %f, y = %f\n", x, y);

		shader.enable();

		window.getMousePosition(x, y);

		shader.enable();
		layer.render();

		window.update();

	}	

	return 0;
}



