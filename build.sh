sudo g++ -std=c++11 main.cpp src/*.cpp arcade_games/src/*.cpp src/imgui/imgui.cpp src/imgui/imgui_impl_glfw_gl3.cpp src/imgui/imgui_demo.cpp src/imgui/imgui_draw.cpp -o main -lGL -lGLEW -lglfw3

sudo ./main
