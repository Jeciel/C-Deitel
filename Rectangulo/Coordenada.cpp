#include "Coordenada.h"

Coordenada::Coordenada(float x, float y)
{
    setX(x);
    setY(y);
}

void Coordenada::setX(float x)
{
    this->x = (x >= 0.0 && x <= 20) ? x : 0.0;
}

void Coordenada::setY(float y)
{
    this->y = (y >= 0.0 && y <= 20) ? y : 0.0;
}

float Coordenada::getX()
{
    return x;
}

float Coordenada::getY()
{
    return y;
}

bool Coordenada::esIgual(Coordenada x){
    return (this->getX() == x.getX() && x.getY() == this->getY());
}