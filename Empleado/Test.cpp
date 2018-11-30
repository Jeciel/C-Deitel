#include <iostream>
#include "Empleado.h"

int main()
{
    Fecha nacimiento(7, 24, 1949);
    Fecha contratacion(3, 12, 1988);
    std::cout << "El numero de empleados antes de la instancia es " << Empleado::getCuenta();
    std::cout << std::endl;

    Empleado *gerentePtr = new Empleado("Bob", "Blue", nacimiento, contratacion);
    Empleado *empleado1Ptr = new Empleado("Bob", "Blue", nacimiento, contratacion);
    Empleado *empleado2Ptr = new Empleado("Bob", "Blue", nacimiento, contratacion);

    std::cout << "El numero de empleados despues de instancias objetos es " << Empleado::getCuenta();
    std::cout << std::endl;

    /*gerentePtr->imprimir();
    empleado1Ptr->imprimir();*/

    Fecha ultimoDescanso(14, 35, 1994);
    std::cout << std::endl;
    return 0;
}