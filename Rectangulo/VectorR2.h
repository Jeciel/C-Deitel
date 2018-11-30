#ifndef VECTORR2_H
#define VECTORR2_H
class VectorR2
{
  private:
    float x;
    float y;

  public:
    VectorR2(float = 0.0, float =  0.0);
    float getX();
    float getY();
    void setX(float x);
    void setY(float y);
    void setVector(float = 0.0, float = 0.0);
    void imprimir();
    VectorR2 suma(VectorR2);
    VectorR2 suma(VectorR2, VectorR2);
    VectorR2 resta(VectorR2);
    VectorR2 resta(VectorR2, VectorR2);
    float mult(VectorR2);
    VectorR2 mult(float);
    float mult(VectorR2, VectorR2);
    float norm();
    float norm(VectorR2);


};
#endif