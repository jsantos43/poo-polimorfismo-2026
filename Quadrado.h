#ifndef QUADRADO_H
#define QUADRADO_H

#include "Figura.h"

class Quadrado : public Figura{
public:
    Quadrado(int x = 0, int y =0);

    void Desenha() const;
};

#endif