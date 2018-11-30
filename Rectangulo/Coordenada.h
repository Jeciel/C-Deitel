#ifndef COORDENADA_H
#define COORDENADA_H
class Coordenada
{
  public:
    Coordenada(float = 0.0, float = 0.0);
    void setX(float = 0.0);
    void setY(float = 0.0);
    float getX();
    float getY();
    bool esIgual(Coordenada x);


  private:
    float x;
    float y;
};
#endif