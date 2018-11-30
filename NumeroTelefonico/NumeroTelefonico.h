#ifndef NUMEROTELEFONICO_H
#define NUMEROTELEFONICO_H
#include <iostream>
#include <string>

class NumeroTelefonico
{
    friend std::ostream &operator<<(std::ostream &, const NumeroTelefonico &);
    friend std::istream &operator>>(std::istream &, NumeroTelefonico &);

    private:
        std::string codigoArea;
        std::string intercambio;
        std::string linea;
};
#endif