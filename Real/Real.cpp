#include "Real.h"
#include <iostream>
#include <iomanip>

Real::Real(int n, int d)
{
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
    if (d < 0) //si denominador es negativo
    {
        setNumerador(getNumerador() * -1);
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
        //Algoritmo de euclides
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
