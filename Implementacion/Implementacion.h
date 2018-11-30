#ifndef IMPLEMENTACION_H
#define IMPLEMENTACION_H

class Implementacion
{
  public:
    Implementacion(int v) : valor(v)
    {
    }

    Implementacion *setValor(int v)
    {
        valor = v;
        return this;
    }

    int getValor() const
    {
        return valor;
    }

  private:
    int valor;
};

#endif
