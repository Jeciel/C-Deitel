#include <iomanip>

#include "NumeroTelefonico.h"

std::ostream &operator<<(std::ostream &salida, const NumeroTelefonico &numero)
{
    salida << "(" << numero.codigoArea << ")" << numero.intercambio << "-" << numero.linea;
    return salida;
}

std::istream &operator>>(std::istream &input, NumeroTelefonico &numero)
{
    input.ignore();
    input >> std::setw(3) >> numero.codigoArea;
    input.ignore(2);
    input >> std::setw(3) >> numero.intercambio;
    input.ignore();
    input >> std::setw(4) >> numero.linea;
    return input;
}