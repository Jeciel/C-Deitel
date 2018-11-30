#include <iostream>
#include <iomanip>
#include "Tiempo.h"
#include <ctime>
#define UTC (-5)

Tiempo::Tiempo(int h, int m, int s)
{
    if (h == 0 || m == 0 || s == 0)
    {
        time_t rawtime;
        struct tm *ptm;
        std::time(&rawtime);
        ptm = gmtime(&rawtime);
        setTiempo((ptm->tm_hour + UTC) % 24, ptm->tm_min, ptm->tm_sec);
    }
    else
    {
        setTiempo(h, m, s);
    }
}

Tiempo &Tiempo::setTiempo(int h, int m, int s)
{
    setHora(h);
    setMinuto(m);
    setSegundo(s);
    return *this;
}

Tiempo &Tiempo::setHora(int h)
{
    hora = (h >= 24) ? (h - (h / 24) * 24) : (h < 0) ? 0 : h;
    return *this;
}

Tiempo &Tiempo::setSegundo(int s)
{
    if (s >= 60)
    {
        int min = s / 60;
        setMinuto(getMinuto() + (min));
        segundo = s - (min * 60);
    }
    else
        segundo = (s >= 0 && s < 60) ? s : 0;
    return *this;
}

Tiempo &Tiempo::setMinuto(int m)
{
    if (m >= 60)
    {
        int hor = m / 60;
        setHora(getHora() + (hor));
        minuto = m - (hor * 60);
    }
    else
        minuto = (m >= 0 && m < 60) ? m : 0;
    return *this;
}

int Tiempo::getHora() const
{
    return hora;
}

int Tiempo::getMinuto() const
{
    return minuto;
}

int Tiempo::getSegundo() const
{
    return segundo;
}

void Tiempo::imprimirUniversal() const
{
    std::cout << std::setfill('0') << std::setw(2) << getHora() << ":" << std::setw(2) << getMinuto() << ":" << std::setw(2) << getSegundo() << std::endl;
}

void Tiempo::imprimirEstandar()
{
    std::cout << ((getHora() == 0 || getHora() == 12) ? 12 : getHora() % 12) << ":" << std::setfill('0') << std::setw(2) << getMinuto() << ":" << std::setw(2) << getSegundo() << (getHora() < 12 ? " AM" : " PM") << std::endl;
}

int &Tiempo::setHoraIncorrecta(int h)
{
    hora = (h >= 0 && h < 24) ? h : 0;
    return hora;
}

void Tiempo::tictac()
{
    setSegundo(getSegundo() + 1);
}