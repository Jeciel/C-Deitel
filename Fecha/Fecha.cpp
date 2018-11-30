#include <iostream>
#include "Fecha.h"

//Constructor predeterminado
Fecha::Fecha(int d, int m, int y)
{
    setFecha(d, m, y);
    std::cout << "Constructor para fecha " << d << "/" << m << "/" << y << std::endl;
}

Fecha::~Fecha()
{
    std::cout << "Destructor para fecha " << getDia() << "/" << getMes() << "/" << getAnio() << std::endl;
}

bool Fecha::setFecha(int d, int m, int y)
{
    setAnio(y);
    setMes(m);
    setDia(d);
    return true;
}

void Fecha::setDia(int d)
{
    dia = (d <= 0) ? 1 : (d > *meses[getMes() - 1]) ? *meses[getMes() - 1] : d;
}

bool Fecha::sumDia(int d)
{
    if (d > 0 && validar())
    {
        int diasA = getNumDias(getDia(), getMes(), getAnio());
        int tamA = esBisiesto(getAnio()) ? BISIESTO : ANIO;
        int Td = d + diasA;

        while (Td > tamA)
        {
            Td = Td - tamA;
            setAnio(getAnio() + 1);
            tamA = esBisiesto(getAnio()) ? BISIESTO : ANIO;
        }

        setMes(1);
        int i = 0;
        while (Td > *meses[i])
        {
            Td = Td - *meses[i];
            i++;
        }

        setMes(i + 1);
        setDia(Td);
    }
    else
    {
        std::cout << "error asignando dia";
        return false;
    }

    return true;
}

void Fecha::setAnio(int y)
{
    anio = y;
    meses[1] = esBisiesto(anio) ? &febBisiesto : &febNoBisiesto;
}

void Fecha::setMes(int m)
{
    mes = (m <= 0) ? 1 : ((m > 12) ? 12 : m);
}

bool Fecha::sumMes(int m)
{
    if (m > 0)
    {
        int tempM = getMes() - 1;
        setAnio(getAnio() + (tempM / 12));

        tempM += m - ((m / 12) * 12);
        setAnio(getAnio() + (tempM / 12));

        mes = tempM - ((tempM / 12) * 12) + 1;
    }
    else
    {
        std::cout << "Error asignando mes";
        return false;
    }

    return true;
}

bool Fecha::sumAnio(int a)
{
    setAnio(getAnio() + a);
    return true;
}

int Fecha::getDia() const
{
    return dia;
}

int Fecha::getAnio() const
{
    return anio;
}

int Fecha::getMes() const
{
    return mes;
}

void Fecha::imprimir() const
{
    std::cout << dia << '/' << mes << '/' << anio << std::endl;
}

bool Fecha::siguienteDia()
{
    return sumDia(1);
}

bool Fecha::esBisiesto(int y)
{
    /*
    Un año es bisiesto en el calendario Gregoriano, si es divisible entre 4 y no divisible entre 100, 
    y también si es divisible entre 400. Fuente: https://es.wikibooks.org/wiki/Algoritmo_bisiesto#Diagrama_de_flujo*/
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

bool Fecha::esBisiesto()
{
    return esBisiesto(getAnio());
}

int Fecha::getNumDias(int d, int m, int a) /*numero de días que han pasado en el año*/
{
    if (validar(d, m, a))
    {
        int sum = 0;
        for (int i = 1; i < m; i++)
        {
            sum += *meses[i];
        }

        return sum + d;
    }
    else
    {
        return 0;
    }
}

int Fecha::getNumDias() /*número de días que han pasado en el año*/
{
    return getNumDias(getDia(), getMes(), getAnio());
}

bool Fecha::validar(int d, int m, int y) //Valida que la fecha sea correcta
{
    if (d > 0 && (m > 0 && m <= 12)) //Día tiene que ser mayor a cero y mes tiene que ser mayor a 0 y menor o iugal a 12
        return d <= *meses[m - 1];
    return false;
}

bool Fecha::validar()
{
    return validar(getDia(), getMes(), getAnio());
}