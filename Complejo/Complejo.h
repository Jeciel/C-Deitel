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

    void imprimir();

   
    //Sobre carga de operadores Complejo a Complejo
    bool operator==(const Complejo &) const;
    Complejo operator+(const Complejo &);
    Complejo operator-(const Complejo &);

    //Sobre carga de operadores Complejo a Double     
    bool operator==(const double) const;
    Complejo operator+(const double);
    Complejo operator-(const double);

    Complejo operator*(const double); //multiplicacion Complejo * Dobule
    //TODO Double * Complejo

  private:
    double parteReal, parteImaginaria;
};

#endif