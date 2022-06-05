#ifndef WINDOW_H                                                                                     
#define WINDOW_H

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "vec4.h"

#include "../src/imgui/imgui.h"
#include "../src/imgui/imgui_impl_glfw_gl3.h"
#include "../src/imgui/imconfig.h"
#include "../src/imgui/imgui_internal.h"
#include "../src/imgui/stb_rect_pack.h"
#include "../src/imgui/stb_textedit.h"
#include "../src/imgui/stb_truetype.h"

#define MAX_NUMB_OF_KEYS        1024
#define MAX_NUMB_OF_BUTTONS     32

using namespace std;

class Window {
private:

	/*bool show_demo_window = true;
        bool show_another_window = false;
        ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);*/

	//const vec4 wireframe_color = vec4(0.75f, 0.75f, 0.75f, 0.75f);
	//const vec4 default_color = vec4(0.75f, 0.75f, 0.75f, 0.75f);
	const vec4 wireframe_color = vec4(0.58f, 0.58f, 0.58f, 0.002f);
	const vec4 default_color = vec4(0.07f, 0.13f, 0.17f, 1.0f);

	bool state_flag = false; 

        const char *name;
        int width, height;
        GLFWwindow *window;
        bool window_Closed;

        bool init();

        bool Keys[MAX_NUMB_OF_KEYS];
        bool MouseButtons[MAX_NUMB_OF_BUTTONS];
        double x_mouse_pos, y_mouse_pos;

        // Declare as a friend
        friend void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods);
        friend void key_mouse_button_callback(GLFWwindow *window, int button, int action, int mods);
        friend void cursor_position_callback(GLFWwindow *window, double xpos, double ypos);

public:
        Window(const char *name, int width, int height);
        ~Window();

        bool closed()   const;
        void update();
        void clear()    const;

	//void RenderGUI(int *numb, float *viral_flagella, int *faces);
	void RenderGUI(int *numb_face, float *strength, float *roughness, float *x_offset, float *y_offset, float *z_offset);

        const int getWidth() { return width; }
        const int getHeight() { return height; }

	GLFWwindow* getWindow() { return window; }
	
        static Window *INSTANCE;
    
        bool isKeyPressed(unsigned int keycode) const;
        bool isMouseButtonPressed(unsigned int button) const;
        void getMousePosition(float &x, float &y) const;

	void SetWireFrame(bool flag) { state_flag = flag; }	
};

#endif
