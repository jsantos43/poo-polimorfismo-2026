#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura{
public:
    Triangulo();
    Triangulo(int x = 0, int y =0);

    void Desenha() const;
};

#endif