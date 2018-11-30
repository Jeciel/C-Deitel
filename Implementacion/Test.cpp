#include <iostream>
#include "Interfaz.h"

int main()
{
    Interfaz i(5);
    std::cout << "Interfaz contiene " << i.getValor() << " antes de setValor()" << std::endl;
    i.setValor(10);
    std::cout << "Interfaz contiene " << i.getValor() << " despues de setValor()" << std::endl;
    return 0;
}