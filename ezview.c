#include <OpenGL/gl.h>
#include <GLFW/glfw3.h>

#include "../deps/linmath.h"

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


typedef struct Edge{
        face* face;
        vertex* vertex;
        Edge* next;
        Edge* prev;
        Edge pair;
}Edge;
typedef struct vertex{
float position[3];
Edge* edge;
}vertex;

typedef struct{
    Edge* edge;
}Face;
Edge* start = face->edge;
Edge* current = start;
do{
    draw(e):
        current = current ->next;
}
Edge start = face->edge;
Edge*current = start;
norm = Vec(0,0,0);
current_edge_vector = vec3();
previous_edge_vector = vec3();
do{
    current_edge_vector = current-> next->vertex-current.vertex;
    if(current_edge_vector&& previous_edge_vector){
        norm = cross(current_edge_vector, previous_edge_vector);
    }
    previous_edge_vector = current_edge_vector
    current = current->next;
    normalize(norm);

    Edge* Start = vertex->edge;
    Edge* current = start;
    do{
        visit(current);
        current = current->previous->pair;
    }
SetEdge(Edge, vertex, Face, prev_edge, next_edge, pair_edge);
SetEdge(E[0], V[0], E[2], E[1], E[11]);
SetEdge E[1], V[1], E[0], E[2], E[5];
F[0]->edge = E[0];
F[1]->edge = E[2];
F[2]->edge = E[7];
F[3]->edge = E[9];

V[0]->edge = E[0];
V[1]->edge = E[1];
V[2]->edge = E[3];
V[3]->edge = E[2];

Vi = (n-3/n)di
I = (1 - Kr - Kt) * Ilocal + Kr *IR + Kt * IT


typedef struct{
    face* face;
    vertex* vertex-1;
    vertex* vertex-2;
}Edge;

typedef struct{
    start = face->edge;
    current = start;
    do{
        current = current->dual->next;
    }while(current != start);
    start = face->edge;
    current = start;
    do{
        current = current->next;
    }while(current!=start);
}


typedef struct{
    corner* next;
    corner* adj;
    vertext* vertex;
}corner;
start = face-> current;
current = start;
do{
    current = current->next;
}while(current!=start);
start = face-> corner
current = start;
do{
    current = current -> adj;
}while(current != start);





typedef struct {
  float Position[2];
  float TexCoord[2];
} Vertex;

// (-1, 1)  (1, 1)
// (-1, -1) (1, -1)

Vertex vertexes[] = {
  {{1, -1}, {0.99999, 0}},
  {{1, 1},  {0.99999, 0.99999}},
  {{-1, 1}, {0, 0.99999}}
};


static const struct{
    float x, y,
    float r, g, b
}vertices[3]=
{
    {-0.6f, -0.4f, 1.f, 0.f, 0.f}
    {0.6f, -0.4f,0f,1.f,0.f}
    {0.f,0.6f,0.f,0.f,1.f}
}
static const char* vertex_shader_text =
"uniform mat4 MVP;\n"
"attribute vec2 TexCoordIn;\n"
"attribute vec2 vPos;\n"
"varying vec2 TexCoordOut;\n"
"void main()\n"
"{\n"
"    gl_Position = MVP * vec4(vPos, 0.0, 1.0);\n"
"    TexCoordOut = TexCoordIn;\n"
"}\n";

static const char* fragment_shader_text =
"varying vec2 TexCoordOut;\n"
"uniform sampler2D Texture;\n"
"void main()\n"
"{\n"
"    gl_FragColor = texture2D(Texture, TexCoordOut);\n"
"}\n";

static void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}

GLuint simple_shader(GLint shader_type, char* shader_src){
	GLint compile_success = 0;

int shader_id = glCreateShader(shader_type);
glShaderSource(Shader_id, 1, &shader_src, 0);
glCompileShader(shader_id);
glGetShaderiv(shader_id, GL_COMPILE_STATUS, &compile_success);
if(compile_success == GL_FALSE){
	gcchar message[256];
glGetShaderInfoLog(shader_id), sizeof(message), 0, &manage[0]);
printf("glCompileShaderError: %s\n", message);
exit(1);
}
return shader_id;
}

// 4 x 4 image..
unsigned char image[] = {
  255, 0, 0, 255,
  255, 0, 0, 255,
  255, 0, 0, 255,
  255, 0, 0, 255,

  0, 255, 0, 255,
  0, 255, 0, 255,
  0, 255, 0, 255,
  0, 255, 0, 255,

  0, 0, 255, 255,
  0, 0, 255, 255,
  0, 0, 255, 255,
  0, 0, 255, 255,

  255, 0, 255, 255,
  255, 0, 255, 255,
  255, 0, 255, 255,
  255, 0, 255, 255
};

GLuint simple_program(){
    GLint link_success = 0;
    GLint program_id = glCreateProgram();
    GLuint vertex_shader = simple_shader(GL_VERTEX_SHADER, vertex_shader_src);
    GLuint fragment_shader = simple_shader(GL_FRAGMENT_SHADER, fragment_shader_src);

    glAttachShader(program_id), vertex_shader);
    glAttachShader(program_id), fragment_shader);

    glLinkProgram(program_id);
    glGetProgram(program_id, GL_LINK_STATUS, &link-success);

    if(link_success == GL_FALSE); {
        GLchar message[256];
        glGetProgramInfoLog(program_id, sizeof(message); 0, &message[0]);
        printf("glLinkProgramError: %S\n", message);
        exit(1);
    }
    return program_id;
}




static void error_callback(int error, char* description){
    promtf("GLFW Error: %s\n", error, description);
}





int main(void)
{
    GLint program_id, position_slot, color_slot;
    GLuint vertex_buffer;
    GLuint index_buffer;
    glfwSetErrorCallback(error_callback);
    if(!glfwInit()) return -1;

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_CREATION_API_GLFW_EGL_CONTEXT_API);
    glfwWIndowHint(GLFW_CONTEXT_MAJOR_VERSION, 2);
    glfwWindowHint(GLFW_CONTEXT_MINOR_VERSION, 0);

    window = glfwCreateWindow(640, 480 "Program", NULL, NULL);
    if(!Window){
        glfwTerminate();
        exit(1);
    }
    glfwMakeContextCurrent(Window);
    program_id = simple_program();
    glUse Program(program_id);
    position_slot = glGetAttribLocation(program_id, "Position");
    color_slot = glGetAttribLocation(program_id, "SourceColor");
    glEnableVertexAttribArray(position_slot);
    glEnableVertexAttribArray(color_slot);
    glGetBuffer(1, &vertex_buffer);

    glBindBuffer(GC_ARRAY_BUFFER, vertex_buffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    glGenBuffer(1, &index_buffer);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, index, buffer();
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);



    GLFWwindow* window;
    GLuint vertex_buffer, vertex_shader, fragment_shader, program;
    GLint mvp_location, vpos_location, vcol_location;

    glfwSetErrorCallback(error_callback);

    if (!glfwInit())
        exit(EXIT_FAILURE);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    window = glfwCreateWindow(640, 480, "Simple example", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwSetKeyCallback(window, key_callback);

    glfwMakeContextCurrent(window);
    // gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
    glfwSwapInterval(1);

    // NOTE: OpenGL error checks have been omitted for brevity

    glGenBuffers(1, &vertex_buffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex_shader, 1, &vertex_shader_text, NULL);
    GLint simple_shader(vertex_shader);

    fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment_shader, 1, &fragment_shader_text, NULL);
    GLint simple_shader(fragment_shader);

    program = glCreateProgram();
    glAttachShader(program, vertex_shader);
    glAttachShader(program, fragment_shader);
    glLinkProgram(program);
    // more error checking! glLinkProgramOrDie!

    mvp_location = glGetUniformLocation(program, "MVP");
    assert(mvp_location != -1);

    vpos_location = glGetAttribLocation(program, "vPos");
    assert(vpos_location != -1);

    GLint texcoord_location = glGetAttribLocation(program, "TexCoordIn");
    assert(texcoord_location != -1);

    GLint tex_location = glGetUniformLocation(program, "Texture");
    assert(tex_location != -1);

    vcol_location = glGetAttribLocation(prpgram, "vcol");

    glEnableVertexAttribArray(vpos_location);
    glVertexAttribPointer(vpos_location, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*) 0);

    glEnableVertexAttribArray(vcol_location);
    glEnableVertexAttribArray(texcoord_location);
    glVertexAttribPointer(texcoord_location, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*) (sizeof(float) * 2));

    int image_width = 4;
    int image_height = 4;

    GLuint texID;
    glGenTextures(1, &texID);
    glBindTexture(GL_TEXTURE_2D, texID);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image_width, image_height, 0, GL_RGBA,
		 GL_UNSIGNED_BYTE, image);

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, texID);
    glUniform1i(tex_location, 0);

    while (!glfwWindowShouldClose(window))
    {
        float ratio;
        int width, height;
        mat4x4 m, p, mvp;

        glfwGetFramebufferSize(window, &width, &height);
        ratio = width / (float) height;

        glViewport(0, 0, width, height);
        glClear(GL_COLOR_BUFFER_BIT);

        mat4x4_identity(m);
        mat4x4_rotate_Z(m, m, (float) glfwGetTime());
        mat4x4_ortho(p, -ratio, ratio, -1.f, 1.f, 1.f, -1.f);
        mat4x4_mul(mvp, p, m);

        glUseProgram(program);
        glUniformMatrix4fv(mvp_location, 1, GL_FALSE, (const GLfloat*) mvp);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();
    exit(EXIT_SUCCESS);
}





