#include "Figura.h"

Figura::Figura() {}

void Figura::DibujarFigura(float aX, float aY, float aZ) {
    glPushMatrix();
        glTranslatef(aX,aY,aZ);
        glPushMatrix();
            glTranslatef(-0.75, 0.5, 0.0);
            glRotatef(90.0, 1.0, 0.0, 0.0);
            glutSolidTorus(0.275, 0.85, 15, 15);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-0.75, -0.5, 0.0);
            glRotatef(270.0, 1.0, 0.0, 0.0);
            glutSolidCone(1.0, 2.0, 15, 15);
        glPopMatrix();
    glPopMatrix();
}

Figura::~Figura() {}