#include "Coordenada.h"

#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{

  private:
    Coordenada c1, c2, c3, c4;
    Coordenada *coordenadas[4] = {&c1, &c2, &c3, &c4};

  public:
    Rectangulo(Coordenada = Coordenada(1.0,1.0), Coordenada = Coordenada(1.0,2.0), Coordenada = Coordenada(2.0,2.0), Coordenada = Coordenada(2.0,1.0));
    void setCoordenadas(Coordenada, Coordenada, Coordenada, Coordenada);
    Coordenada *getCoordenadas();
    Coordenada getC1();
    Coordenada getC2();
    Coordenada getC3();
    Coordenada getC4();
    bool esRectangulo();
    bool esCuadrado();



    void setC1(Coordenada);
    void setC2(Coordenada);
    void setC3(Coordenada);
    void setC4(Coordenada);

    float getPerimetro();
    float getArea();
};
#endif