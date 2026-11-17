#ifndef RETANGULO_H
#define RETANGULO_H

#include "Figura.h"

class Retangulo : public Figura{
public:
    Retangulo(int x = 0, int y =0);

    void Desenha() const;
};

#endif