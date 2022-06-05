#include "../headers/BatchRenderer2D.h"

//BatchRenderer2D::wire_frame = false;

BatchRenderer2D::BatchRenderer2D() {
	init();
}
BatchRenderer2D::~BatchRenderer2D() {
	delete IBO;
	glDeleteBuffers(1, &VBO);
}

void BatchRenderer2D::init() {
	// VBO - Vertex Buffer Object, used to store all the vertices we want to draw

	glGenVertexArrays(1, &VAO);	
	glGenBuffers(1, &VBO);
	
	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, BUFFER_SIZE, NULL, GL_DYNAMIC_DRAW);


	glEnableVertexAttribArray(SHADER_VERTEX_INDEX);	// layout 0, this is for face formation
	glEnableVertexAttribArray(SHADER_COLOR_INDEX);	// layout 1, this is for face formation
	glEnableVertexAttribArray(SHADER_NORMAL_INDEX);	// layout 1, this is for face formation


	glVertexAttribPointer(SHADER_VERTEX_INDEX, 3, GL_FLOAT, GL_FALSE, VERTEX_SIZE, (const GLvoid*) 0);
	glVertexAttribPointer(SHADER_COLOR_INDEX, 4, GL_FLOAT, GL_FALSE, VERTEX_SIZE, (const GLvoid*) (3 * sizeof(GLfloat)));
	glVertexAttribPointer(SHADER_NORMAL_INDEX, 3, GL_FLOAT, GL_FALSE, VERTEX_SIZE, (const GLvoid*) (7 * sizeof(GLfloat))); //Added the NORMAL buffer
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	GLuint indices[INDICES_SIZE];
	
	int offset = 0;
	
	for(int i=0; i < INDICES_SIZE; i+=3) {
		indices[i] = offset;
		indices[i+1] = offset + 1;
		indices[i+2] = offset + 2;
		
		offset += 3;
	}

	IBO = new IndexBuffer(indices, INDICES_SIZE);
	
	glBindVertexArray(0);
}



void BatchRenderer2D::begin() {
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	m_Buffer = (VertexData*) glMapBuffer(GL_ARRAY_BUFFER, GL_WRITE_ONLY);
} 



void BatchRenderer2D::submit(const Renderable2D* renderable) {
	const vec3& positionA	= renderable->getPositionA();
	const vec3& positionB	= renderable->getPositionB();
	const vec3& positionC	= renderable->getPositionC();

	const vec4& color	= renderable->getColor();

	vec3 line1;
	vec3 line2;

	line1.x = positionB.x - positionA.x;
	line1.y = positionB.y - positionA.y;
	line1.z = positionB.z - positionA.z;
	
	line2.x = positionB.x - positionC.x;
	line2.y = positionB.y - positionC.y;
	line2.z = positionB.z - positionC.z;

	vec3 normal = vec3::CrossProduct(line1, line2); 
	float c = sqrt(normal.x*normal.x + normal.y*normal.y + normal.z*normal.z);
	normal.x /= c; 
	normal.y /= c;
	normal.z /= c;

	//if (vec3::DotProduct(vec3(0, 0, 0), normal) < 1.0f) { 
		m_Buffer->vertex	= positionA;
		m_Buffer->color		= color;
		m_Buffer->normal	= normal;
		m_Buffer++;	
        
		m_Buffer->vertex	= positionB; 
		m_Buffer->color		= color;
		m_Buffer->normal	= normal;
		m_Buffer++;	
        
		m_Buffer->vertex	= positionC;
		m_Buffer->color		= color;
		m_Buffer->normal	= normal;
		m_Buffer++;	

        
		IndexCount += 3;
	//}
}


void BatchRenderer2D::end() {
	glUnmapBuffer(GL_ARRAY_BUFFER);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}


void BatchRenderer2D::flush() {
	glBindVertexArray(VAO);
	IBO->bind(); 
	glDrawElements(GL_TRIANGLES, IndexCount, GL_UNSIGNED_INT, NULL); 
	IBO->unbind(); 
	glBindVertexArray(0); 
	IndexCount = 0; 
} 









