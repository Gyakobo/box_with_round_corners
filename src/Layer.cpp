#include "../headers/Layer.h"

Layer::Layer(Renderer2D* renderer, Shader* shader, mat4 projectionMatrix)
: Renderer(renderer), m_Shader(shader), ProjectionMatrix(projectionMatrix)
 {
	m_Shader->enable();
	m_Shader->setUniformMat4("pr_matrix", ProjectionMatrix);
	m_Shader->disable();
}


Layer::~Layer() {
	delete m_Shader;
	delete Renderer;

	for (int i=0; i<Renderables.size(); i++) {
		delete Renderables[i];
	}
}


void Layer::add(Renderable2D* renderable) {
	Renderables.push_back(renderable);
}

void Layer::clean_slate() {
	Renderables = {};
}

void Layer::render() {
	m_Shader->enable();
	Renderer->begin();
	
	for(const Renderable2D* renderable: Renderables) {
		Renderer->submit(renderable);
	}	

	Renderer->end();
	
	Renderer->flush();
//	m_Shader->disable();
}


