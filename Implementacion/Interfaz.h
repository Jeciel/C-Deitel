#ifndef INTERFAZ_H
#define INTERFAZ_H
class Implementacion;
class Interfaz
{
  public:
    Interfaz(int);
    void setValor(int);
    int getValor()const;
    ~Interfaz();

  private:
    Implementacion *ptr;
};

#endif