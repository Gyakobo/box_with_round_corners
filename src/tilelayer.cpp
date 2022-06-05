#include "../headers/tilelayer.h"

/*TileLayer::TileLayer(Shader* shader) 
: Layer(new BatchRenderer2D(), shader, mat4::orthographic(-16.0f, 16.0f, -9.0f, 9.0f, -1.0f, 1.0f)) {
}*/

TileLayer::TileLayer(Shader* shader) 
: Layer(new BatchRenderer2D(), shader, mat4::perspective(120.0f, 1, 0.1f, 100.0f)) {
}

TileLayer::~TileLayer() {

}

