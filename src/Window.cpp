#include "../headers/Window.h"

void WindowAdjust(GLFWwindow *window, int m_width, int m_height);
void key_callback(GLFWwindow *w_window, int key, int scancode, int action, int mods);
void key_mouse_button_callback(GLFWwindow *w_window, int button, int action, int mods); 
void cursor_position_callback(GLFWwindow *w_window, double xpos, double ypos);

Window::Window(const char *name, int width, int height) {
	this->name 	= name;
	this->width 	= width;
	this->height 	= height;
	if (!init()) glfwTerminate();
	
	for (int i=0; i<MAX_NUMB_OF_KEYS; i++) {
		Keys[i] = false;
	}
	for (int i=0; i<MAX_NUMB_OF_BUTTONS; i++) {
		MouseButtons[i] = false;
	}
}


Window::~Window() {
	ImGui_ImplGlfwGL3_Shutdown();
    ImGui::DestroyContext();
	glfwTerminate();
}

void WindowAdjust(GLFWwindow *window, int m_width, int m_height) {
	glViewport(0, 0, m_width, m_height);	
}

bool Window::init() {
	if(!glfwInit()) { 
		cout << "Error has occured, Cannot Initialize GLFW" << endl;
		return false;
	}

	window = glfwCreateWindow(width, height, name, NULL, NULL);
	if (!window) {
		cout << "Failed to Open Window" << endl;
		return false;
	}

	ImGui::CreateContext();
    ImGui_ImplGlfwGL3_Init(window, true);
    ImGui::StyleColorsDark();

	glfwMakeContextCurrent(window);
	glfwSetWindowUserPointer(window, this);	
	glfwSetWindowSizeCallback(window, WindowAdjust);
	glfwSetKeyCallback(window, key_callback);
	glfwSetMouseButtonCallback(window, key_mouse_button_callback);
	glfwSetCursorPosCallback(window, cursor_position_callback);

	if (glewInit() != GLEW_OK) {
		cout << "Glew Failed" << endl;
		return false;
	}

	return true;
}








bool Window::isKeyPressed(unsigned int keycode) const {
	if (keycode >= MAX_NUMB_OF_KEYS)
		return false;
	return Keys[keycode];
} 
bool Window::isMouseButtonPressed(unsigned int button) const {
	if (button >= MAX_NUMB_OF_BUTTONS)
		return false;
	return MouseButtons[button];
} 
void Window::getMousePosition(float &x, float &y) const {
	x = x_mouse_pos;	
	y = y_mouse_pos;	
}








void Window::clear() const {
	if (!state_flag)
		glClearColor(default_color.x, default_color.y, default_color.z, default_color.w); // Change me if needed
	else 
		glClearColor(wireframe_color.x, wireframe_color.y, wireframe_color.z, wireframe_color.w); // Change me if needed
		
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

	ImGui_ImplGlfwGL3_NewFrame();
}


void Window::update() {
	ImGui::Render();
    ImGui_ImplGlfwGL3_RenderDrawData(ImGui::GetDrawData());
	
	glfwSwapBuffers(window);
	glfwPollEvents();
}


bool Window::closed() const {
	if (glfwWindowShouldClose(window)) return true;
	else false;
}


void key_callback(GLFWwindow *w_window, int key, int scancode, int action, int mods) {
	Window* win = (Window*) glfwGetWindowUserPointer(w_window);
	win->Keys[key] = (action != GLFW_RELEASE);
}

void key_mouse_button_callback(GLFWwindow *w_window, int button, int action, int mods) {
	Window* win = (Window*) glfwGetWindowUserPointer(w_window);
	win->MouseButtons[button] = (action != GLFW_RELEASE);
}

void cursor_position_callback(GLFWwindow *w_window, double xpos, double ypos) {
	Window* win = (Window*) glfwGetWindowUserPointer(w_window);
	win->x_mouse_pos = xpos;	
	win->y_mouse_pos = ypos;	
}

void Window::RenderGUI(int *numb_face, float *strength, float *roughness, float *x_offset, float *y_offset, float *z_offset) {
        ImGui::Text("Sides = %d", (*numb_face-1)*(*numb_face-1)*4);

        ImGui::SliderInt("Resolution", numb_face, 2, 30); // Warning: Hard limit is 4 inclusive!
        ImGui::SliderFloat("Strength", strength, 0.01f, 2.2f); // Warning: Hard limit is 4 inclusive!
        ImGui::SliderFloat("Roughness", roughness, 0.0f, 2.0f); // Warning: Hard limit is 4 inclusive!
        ImGui::SliderFloat("x_offset", x_offset, 0.0f, 4.0f); 
        ImGui::SliderFloat("y_offset", y_offset, 0.0f, 4.0f); 
        ImGui::SliderFloat("z_offset", z_offset, 0.0f, 4.0f); 
} 


