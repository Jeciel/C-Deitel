/*Suma, Resta, Multiplica y Divide números Reales tales como a/b etc.. */
#include <iostream>
#include <iomanip>

/*****************************************HEADER FILE*****************************************/
#ifndef REAL_H
#define REAL_H

class Real
{
  private:
    int numerador;
    int denominador;
    void reducir();
    void setNumerador(int = 0);
    void setDenominador(int = 1);

  public:
    Real(int = 1, int = 1);
    int getNumerador();
    int getDenominador();
    void setReal(int = 0, int = 1);
    void imprimir();
    Real suma(Real, Real);
    Real resta(Real, Real);
    Real multiplicacion(Real, Real);
    Real divicion(Real, Real);
};

#endif
/*****************************************END HEADER FILE*****************************************/

/*****************************************IMPLEMENTATION FILE*****************************************/
Real::Real(int n, int d)
{
    /*En un principio pensaba en asignar los valores directamente, pero el problema es que si hago la asignación directa, no podría 
    reducir la fracción automaticamente */
    setReal(n, d);
}


void Real::setReal(int n, int d)
{
    setNumerador(n);
    setDenominador(d);
    reducir();
}

void Real::setNumerador(int n)
{
    numerador = n;
}

void Real::setDenominador(int d)
{
    /*En fracciones es mejor manejar los signos sólo con el numerador*/
    if (d < 0) //si denominador es negativo
    {
        setNumerador(getNumerador() * -1); /*Cambio el signo al numerador*/
        denominador = d * -1;
    }
    else
    {
        denominador = d;
    }
}

int Real::getNumerador()
{
    return numerador;
}

int Real::getDenominador()
{
    return denominador;
}

void Real::imprimir()
{
    if (getDenominador() == 0)
        std::cout << "Indefinido" << std::endl;
    else if (getNumerador() == 0)
        std::cout << "0" << std::endl;
    else
    {
        std::cout << getNumerador() << "/" << getDenominador() << std::endl
                  << std::setprecision(5) << (double)getNumerador() / (double)getDenominador() << std::endl;
    }
}

void Real::reducir()
{
    if ((getDenominador() * getNumerador()) != 0)
    {
        //Algoritmo de Euclides
        int n = (getNumerador() < 0) ? (getNumerador() * -1) : getNumerador(), d = getDenominador(), r = n % d;

        while (n % d != 0)
        {
            r = n % d;
            n = d;
            d = r;
        }

        setNumerador(getNumerador() / d);
        setDenominador(getDenominador() / d);
    }
}

Real Real::suma(Real a, Real b)
{

    Real c = Real(a.getNumerador() * b.getDenominador() + a.getDenominador() * b.getNumerador(), a.getDenominador() * b.getDenominador());
    return c;
}

Real Real::resta(Real a, Real b)
{

    Real c = Real(a.getNumerador() * b.getDenominador() - a.getDenominador() * b.getNumerador(), a.getDenominador() * b.getDenominador());
    return c;
}

Real Real::multiplicacion(Real a, Real b)
{
    Real c = Real(a.getNumerador() * b.getNumerador(), a.getDenominador() * b.getDenominador());
    return c;
}

Real Real::divicion(Real a, Real b)
{
    Real c = Real(a.getNumerador() * b.getDenominador(), a.getDenominador() * b.getNumerador());
    return c;
}

/*****************************************END IMPLEMENTATION FILE*****************************************/

/*****************************************MAIN FILE*****************************************/

int main()
{
    Real r = Real(13, 17);
    Real r2 = Real(13, -17);
    Real r3 = Real().suma(r, r2);

    r3.imprimir();
    return 0;
}

/*****************************************END MAIN FILE*****************************************/
