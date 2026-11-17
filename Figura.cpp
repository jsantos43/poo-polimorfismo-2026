#include "Figura.h"

Figura::Figura(int X, int Y) 
  : x(0), y(0) {
    setX(X);
    setY(Y);
}

int Figura::getX() const {
  return x;
}

int Figura::getY() const {
  return y;
}

bool Figura::setPosicao(int X, int Y) {
  bool deuCertoX, deuCertoY {false};

  deuCertoX = setX(X);
  deuCertoY = setY(Y);

  return deuCertoX && deuCertoY;
}

bool Figura::setX(int X) {
  if (X >= 0 && X <= MAX_X) {
    x = X;
    return true;
  }

  return false;
}

bool Figura::setY(int Y) {
  if (Y >= 0 && Y <= MAX_Y) {
    y = Y;
    return true;
  }

  return false;
}