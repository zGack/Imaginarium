#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

class Figura
{
	public:
		Figura();

		void DibujarFigura(float aX, float aY, float aZ);

		~Figura();
};

