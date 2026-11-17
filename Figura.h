#ifndef FIGURA_H
#define FIGURA_H

#define MAX_X 100
#define MAX_Y 100

class Figura{
    int x;
    int y;

public:
    Figura(int x = 0, int y = 0);

    int getX() const;
    int getY() const;

    bool setPosicao(int, int);
    bool setX(int);
    bool setY(int);

    virtual void Desenha() const = 0;

    static void DisplayRefresh();
};

#endif