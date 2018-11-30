#include "Rectangulo.h"

Rectangulo::Rectangulo(Coordenada a, Coordenada b, Coordenada c, Coordenada d)
{
    setCoordenadas(a, b, c, d);
}

void Rectangulo::setCoordenadas(Coordenada a, Coordenada b, Coordenada c, Coordenada d)
{
    setC1(a);
    setC2(b);
    setC3(c);
    setC4(d);
    esRectangulo();
}

Coordenada *Rectangulo::getCoordenadas()
{
    return coordenadas[0];
}

void Rectangulo::setC1(Coordenada c)
{
    c1.setX(c.getX());
    c1.setY(c.getY());
}

void Rectangulo::setC2(Coordenada c)
{
    c2.setX(c.getX());
    c2.setY(c.getY());
}

void Rectangulo::setC3(Coordenada c)
{
    c3.setX(c.getX());
    c3.setY(c.getY());
}

void Rectangulo::setC4(Coordenada c)
{
    c4.setX(c.getX());
    c4.setY(c.getY());
}

Coordenada Rectangulo::getC1()
{
    return c1;
}

bool Rectangulo::esRectangulo()
{
    Coordenada *coor1 = nullptr;
    Coordenada *coor2 = nullptr;
    
    Coordenada *coorTemp[4];

    for (int i = 0; i < 4; i++)
    {
        coorTemp[i] = coordenadas[i];
    }

    coor1 = coordenadas[0];
    coorTemp[0] = nullptr;
    coor2 = nullptr;

    for (int i = 1; i < 4; i++)
    {
        if (coorTemp[i] != nullptr && !coor1->esIgual(*coorTemp[i]) && coor1->getX() == coorTemp[i]->getX())
        {
            coor2 = coordenadas[i];
            coorTemp[i] = nullptr;
            i = 4;
        }
    }

    if (coor2 == nullptr)
        return false;

    coor1 = coor2;
    coor2 = nullptr;

   for (int i = 1; i < 4; i++)
    {
        if (coorTemp[i] != nullptr && coor1->getY() == coorTemp[i]->getY())
        {
            coor2 = coordenadas[i];
            coorTemp[i] = nullptr;
            i = 4;
        }
    }

    if (coor2 == nullptr)
        return false;

    coor1 = coor2;
    coor2 = nullptr;

    for (int i = 1; i < 4; i++)
    {
        if (coorTemp[i] != nullptr && coor1->getX() == coorTemp[i]->getX())
        {
            coor2 = coordenadas[i];
            coorTemp[i] = nullptr;
            i = 4;
        }
    }

    if (coor2 == nullptr)
        return false;

    return true;
}