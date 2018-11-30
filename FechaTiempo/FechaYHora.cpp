#include "FechaYHora.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#define UTC (-5)

FechaYHora::FechaYHora()
{
    time_t rawtime;
    struct tm *ptm;
    std::time(&rawtime);
    ptm = gmtime(&rawtime);
    setTiempo((ptm->tm_hour + UTC) % 24, ptm->tm_min, ptm->tm_sec);
    setFecha(1, 2, 2000);
}

void FechaYHora::setTiempo(int h, int m, int s)
{
    setHora(h);
    setMinuto(m);
    setSegundo(s);
}

void FechaYHora::setHora(int h)
{
     if (h >= 24)
    {
        int dia = h / 24;
        sumDia(dia);
        hora = h - (dia * 24);
    }
    else
        hora = (h>=24)?(h - (h/24)*24):(h<0)?0:h;
}

void FechaYHora::setSegundo(int s)
{
    if (s >= 60)
    {
        int min = s / 60;
        setMinuto(getMinuto() + (min));
        segundo = s - (min * 60);
    }
    else
        segundo = (s >= 0 && s < 60) ? s : 0;
}

void FechaYHora::setMinuto(int m)
{
    if (m >= 60)
    {
        int hor = m / 60;
        setHora(getHora() + (hor));
        minuto = m - (hor * 60);
    }
    else
        minuto = (m >= 0 && m < 60) ? m : 0;
}

int FechaYHora::getHora()
{
    return hora;
}

int FechaYHora::getMinuto()
{
    return minuto;
}

int FechaYHora::getSegundo()
{
    return segundo;
}

void FechaYHora::imprimirUniversal()
{
    std::cout << std::setfill('0') << std::setw(2) << getDia() << "/" << std::setw(2) << getMes() << "/" << std::setw(2) << getAnio() << '\t'
    << std::setfill('0') << std::setw(2) << getHora() << ":" << std::setw(2) << getMinuto() << ":" << std::setw(2) << getSegundo() << std::endl;
}

void FechaYHora::imprimirEstandar()
{
    std::cout << std::setfill('0') << std::setw(2) << getDia() << "/" << std::setw(2) << getMes() << "/" << std::setw(2) << getAnio() << '\t'
    << ((getHora() == 0 || getHora() == 12) ? 12 : getHora() % 12) << ":" << std::setfill('0') << std::setw(2) << getMinuto() << ":" << std::setw(2) << getSegundo() << (getHora() < 12 ? " AM" : " PM") << std::endl;
}

int &FechaYHora::setHoraIncorrecta(int h)
{
    hora = (h >= 0 && h < 24) ? h : 0;
    return hora;
}

void FechaYHora::tictac()
{
    setSegundo(getSegundo() + 1);
}

/*FECHA*/
bool FechaYHora::setFecha(int d, int m, int y)
{
    setAnio(y);
    setMes(m);
    setDia(d);
    return true;
}

void FechaYHora::setDia(int d)
{
    dia = (d <= 0) ? 1 : (d > *meses[getMes() - 1]) ? *meses[getMes() - 1] : d;
}

bool FechaYHora::sumDia(int d)
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
            tamA = (esBisiesto(getAnio())) ? 366 : 365;
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

void FechaYHora::setAnio(int y)
{
    anio = y;
    meses[1] = esBisiesto(anio) ? &febBisiesto : &febNoBisiesto;
}

void FechaYHora::setMes(int m)
{
    mes = (m <= 0) ? 1 : ((m > 12) ? 12 : m);
}

bool FechaYHora::sumMes(int m)
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

bool FechaYHora::sumAnio(int a)
{
    setAnio(getAnio() + a);
    return true;
}

int FechaYHora::getDia()
{
    return dia;
}

int FechaYHora::getAnio()
{
    return anio;
}

int FechaYHora::getMes()
{
    return mes;
}

void FechaYHora::imprimirFecha()
{
    std::cout << dia << '/' << mes << '/' << anio << std::endl;
}

bool FechaYHora::siguienteDia()
{
    return sumDia(1);
}

bool FechaYHora::esBisiesto(int y)
{
    /*
    Un año es bisiesto en el calendario Gregoriano, si es divisible entre 4 y no divisible entre 100, 
    y también si es divisible entre 400. Fuente: https://es.wikibooks.org/wiki/Algoritmo_bisiesto#Diagrama_de_flujo*/
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

bool FechaYHora::esBisiesto()
{
    return esBisiesto(getAnio());
}

int FechaYHora::getNumDias(int d, int m, int a) /*numero de días que han pasado en el año*/
{
    if (validar(d, m, a))
    {
        int sum = 0;
        for (int i = 1; i < m; i++)
        {
            sum += *meses[i-1];
        }

        return sum + d;
    }
    else
    {
        return 0;
    }
}

int FechaYHora::getNumDias() /*número de días que han pasado en el año*/
{
    return getNumDias(getDia(), getMes(), getAnio());
}

bool FechaYHora::validar(int d, int m, int y) //Valida que la fecha sea correcta
{
    if (d > 0 && (m > 0 && m <= 12)) //Día tiene que ser mayor a cero y mes tiene que ser mayor a 0 y menor o iugal a 12
        return d <= *meses[m - 1];
    return false;
}

bool FechaYHora::validar()
{
    return validar(getDia(), getMes(), getAnio());
}