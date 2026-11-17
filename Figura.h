#ifndef FIGURA_H
#define FIGURA_H

class Figura{
    int x;
    int y;

public:
    Figura();
    Figura(int x = 0, int y = 0);

    int getX() const;
    int getY() const;

    void setPosicao(int, int);
    void setX(int);
    void setY(int);

    virtual void Desenha() const = 0;

    static void DisplayRefresh();
};

#endif