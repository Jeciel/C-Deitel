#include "Fecha.h"
#include <iostream>
#include <iomanip>

int main()
{
    Fecha f;
    std::cout << std::setw(5) << "i" << std::setw(5) << "Dia" << std::setw(5) << "mes" << std::setw(5) << "Anio" << std::endl;

    for (int i = 1; i < 500; i++)
    {
        f.setFecha(01, 10, 2018);
        f.sumDia(i);
        std::cout << std::setw(5) << i << std::setw(5) << f.getDia() << std::setw(5) << f.getMes() << std::setw(5) << f.getAnio() << std::endl;
    }

    std::cout << std::endl;

    return 0;
}