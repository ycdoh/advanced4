#include <GLFW/glfw3.h>
#include <cstring>
#include <stdlib.h>		  // srand, rand
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "math.h"
#include <Windows.h>
#include "Circle.h"
#include "Rect.h"
#include "RectF.h"
#include "Line.h"
#include "geometricalobject.h"


GLFWwindow* window;




void drawOnPixelBuffer()
{
	//std::memset(pixels, 1.0f, sizeof(float)*width*height * 3); // doesn't work
	std::fill_n(pixels, width*height * 3, 1.0f);	// white background

													//for (int i = 0; i<width*height; i++) {
													//	pixels[i * 3 + 0] = 1.0f; // red 
													//	pixels[i * 3 + 1] = 1.0f; // green
													//	pixels[i * 3 + 2] = 1.0f; // blue
													//}

	const int i = rand() % width, j = rand() % height;
	drawPixel(i, j, 0.0f, 0.0f, 0.0f);

	geometricalobject **my_objects = new geometricalobject*[100];
	//initialize lines
	my_objects[0] = new Line(20, 200, 80, 200, 1.0f, 0.0f, 0.0f);
	my_objects[1] = new Line(150, 160, 150, 240, 1.0f, 0.0f, 0.0f);
	my_objects[2] = new Line(220, 230, 280, 170, 1.0f, 0.0f, 0.0f);
	my_objects[3] = new Line(320, 170, 380, 230, 1.0f, 0.0f, 0.0f);
	my_objects[4] = new RectF(425, 175, 475, 225, 1.0f, 0.0f, 0.0f);
	my_objects[5] = new Rect(525, 175, 575, 225, 1.0f, 0.0f, 0.0f);
	my_objects[6] = new Circle(650, 200, 25, 100, 1.0f, 0.0f, 0.0f);
	my_objects[7] = new Line(725, 175, 775, 225, 1.0f, 0.0f, 0.0f);
	my_objects[8] = new Line(725, 225, 775, 175, 1.0f, 0.0f, 0.0f);
	my_objects[9] = new Line(825, 200, 875, 200, 1.0f, 0.0f, 0.0f);
	my_objects[10] = new Line(850, 175, 850, 225, 1.0f, 0.0f, 0.0f);
	for (int i = 0; i < 5; i++)
	{
		my_objects[11 + i] = new Circle(950, 200, 25 - i,100, 1.0f, 0.0f, 0.0f);
	}
	my_objects[15] = new Line(20, 600, 80, 600, 1.0f, 0.0f, 0.0f);
	my_objects[16] = new Line(150, 560, 150, 640, 1.0f, 0.0f, 0.0f);
	my_objects[17] = new Line(220, 630, 280, 570, 1.0f, 0.0f, 0.0f);
	my_objects[18] = new Line(320, 570, 380, 630, 1.0f, 0.0f, 0.0f);
	my_objects[19] = new RectF(425, 575, 475, 625, 1.0f, 0.0f, 0.0f);
	my_objects[20] = new Rect(525, 575, 575, 625, 1.0f, 0.0f, 0.0f);
	my_objects[21] = new Circle(650, 600, 25, 100, 1.0f, 0.0f, 0.0f);
	my_objects[22] = new Line(725, 575, 775, 625, 1.0f, 0.0f, 0.0f);
	my_objects[23] = new Line(725, 625, 775, 575, 1.0f, 0.0f, 0.0f);
	my_objects[24] = new Line(825, 600, 875, 600, 1.0f, 0.0f, 0.0f);
	my_objects[25] = new Line(850, 575, 850, 625, 1.0f, 0.0f, 0.0f);
	for (int i = 0; i < 5; i++)
	{
		my_objects[26 + i] = new Circle(950, 600, 25 - i, 100, 1.0f, 0.0f, 0.0f);
	}

	for (int i = 0; i < 10; i++)
	{
		my_objects[30 + i] = new Circle(50 + 100 * i, 200, 45, 100, 1.0f, 0.0f, 0.0f);
	}
	for (int i = 0; i < 10; i++)
	{
		my_objects[40 + i] = new Circle(50 + 100 * i, 600, 45, 100, 1.0f, 0.0f, 0.0f);
	}
	for (int i = 0; i < 10; i++)
	{
		my_objects[50 + i] = new Circle(50 + 100 * i, 200, 45, 100, 0.0f, 0.0f, 1.0f);//blue circle 50-59
	}
	for (int i = 0; i < 10; i++)
	{
		my_objects[60 + i] = new Circle(50 + 100 * i, 600, 45, 100, 0.0f, 0.0f, 1.0f);//bluecircle 60-69
	}
	// drawing a line
	//TODO: anti-aliasing
	double xpos, ypos;
	glfwGetCursorPos(window, &xpos, &ypos);
	
	//main drawing function
	for (int i = 0; i < 50;i++)
	{
		my_objects[i]->draw();
	}
	
	if (xpos > 0 && xpos < 100 && ypos>500 && ypos < 700)
	{
		my_objects[50]->draw();
	}
	else if (xpos > 100 && xpos < 200 && ypos>500 && ypos < 700)
	{
		my_objects[51]->draw();
	}
	else if (xpos > 200 && xpos < 300 && ypos>500 && ypos < 700)
	{
		my_objects[52]->draw();
	}
	else if (xpos > 300 && xpos < 400 && ypos>500 && ypos < 700)
	{
		my_objects[53]->draw();
	}
	else if (xpos > 400 && xpos < 500 && ypos>500 && ypos < 700)
	{
		my_objects[54]->draw();
	}
	else if (xpos > 500 && xpos < 600 && ypos>500 && ypos < 700)
	{
		my_objects[55]->draw();
	}
	else if (xpos > 600 && xpos < 700 && ypos>500 && ypos < 700)
	{
		my_objects[56]->draw();
	}
	else if (xpos > 700 && xpos < 800 && ypos>500 && ypos < 700)
	{
		my_objects[57]->draw();
	}
	else if (xpos > 800 && xpos < 900 && ypos>500 && ypos < 700)
	{
		my_objects[58]->draw();
	}
	else if (xpos > 900 && xpos < 1000 && ypos>500 && ypos < 700)
	{
		my_objects[59]->draw();
	}

	if (xpos > 0 && xpos < 100 && ypos>100 && ypos < 300)
	{
		my_objects[60]->draw();
	}
	else if (xpos > 100 && xpos < 200 && ypos>100 && ypos < 300)
	{
		my_objects[61]->draw();
	}
	else if (xpos > 200 && xpos < 300 && ypos>100 && ypos < 300)
	{
		my_objects[62]->draw();
	}
	else if (xpos > 300 && xpos < 400 && ypos>100 && ypos < 300)
	{
		my_objects[63]->draw();
	}
	else if (xpos > 400 && xpos < 500 && ypos>100 && ypos < 300)
	{
		my_objects[64]->draw();
	}
	else if (xpos > 500 && xpos < 600 && ypos>100 && ypos < 300)
	{
		my_objects[65]->draw();
	}
	else if (xpos > 600 && xpos < 700 && ypos>100 && ypos < 300)
	{
		my_objects[66]->draw();
	}
	else if (xpos > 700 && xpos < 800 && ypos>100 && ypos < 300)
	{
		my_objects[67]->draw();
	}
	else if (xpos > 800 && xpos < 900 && ypos>100 && ypos < 300)
	{
		my_objects[68]->draw();
	}
	else if (xpos > 900 && xpos < 1000 && ypos>100 && ypos < 300)
	{
		my_objects[69]->draw();
	}
	//TODO: try moving object
}

int main(void)
{


	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(width, height, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);
	glClearColor(1, 1, 1, 1); // while background

							  /* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		//glClear(GL_COLOR_BUFFER_BIT);

		drawOnPixelBuffer();

		//TODO: RGB struct
		//Make a pixel drawing function
		//Make a line drawing function

		glDrawPixels(width, height, GL_RGB, GL_FLOAT, pixels);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();

		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

	glfwTerminate();

	delete[] pixels; // or you may reuse pixels array 

	return 0;
}