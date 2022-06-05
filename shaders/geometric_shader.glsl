/*#version 330

layout (triangles) in;
layout (triangle_strip, max_vertices=3) out;

out vec4 frag_color;

// Shadow related stuff
out vec3 out_normal;

in DATA {
	vec4 color;	
	mat4 projection_matrix;
	vec3 normal;	
} vertex_in[];

void main(void) {
    gl_Position     = vertex_in[0].projection_matrix * gl_in[0].gl_Position;
    frag_color      = vertex_in[0].color;
    out_normal      = vertex_in[0].normal;
    EmitVertex();

    gl_Position     = vertex_in[1].projection_matrix * gl_in[1].gl_Position;
    frag_color      = vertex_in[1].color;
    out_normal      = vertex_in[1].normal;
    EmitVertex();
    
    gl_Position     = vertex_in[2].projection_matrix * gl_in[2].gl_Position;
    frag_color      = vertex_in[2].color;
    out_normal      = vertex_in[2].normal;
    EmitVertex();

    EndPrimitive();
}*/









