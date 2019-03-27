#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo
{
  public:
    Complejo(double = 1, double = 1);
    void setParteReal(double = 1);
    void setParteImaginaria(double = 1);
    double getParteReal();
    double getParteImaginaria();
    Complejo suma(Complejo *, Complejo *);
    Complejo resta(Complejo *, Complejo *);
    void imprimir();
    
    //Sobre carga de operadores
    bool operator==(const Complejo &) const;
    Complejo operator+(const Complejo &);

  private:
    double parteReal, parteImaginaria;
};

#endif