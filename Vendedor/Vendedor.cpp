#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include "Vendedor.h"

Vendedor::Vendedor()
{
    for (int i = 0; i < 12; i++)
    {
        ventas[i] = 0.0;
    }
    std::srand(std::time(0));
}

void Vendedor::ObtenerVentasDelUsuario()
{
    double cifraVentas;

    for (int i = 1; i <= 12; i++)
    {
        //std::cout<<"Escriba el monto de ventas para el mes "<< i <<": ";
        //std::cin>>cifraVentas;
//        cifraVentas = (std::rand() % 1000 + 1)+(std::rand() % 100 + 1)/100;
        cifraVentas = (double)(std::rand() % 100000 + 1)/100;

        establecerVentas(i, cifraVentas);
    }
}

void Vendedor::establecerVentas(int mes, double monto)
{
    if (mes >= 1 && mes <= 12 && monto > 0)
        ventas[mes - 1] = monto;
    else
        std::cout << "Mes o cifra invalidos";
}

void Vendedor::imprimirVentasAnuales()
{
    std::cout << std::setprecision(2) << std::fixed << "\nLas ventas anuales totales son: $" << totalVentasAnuales() << std::endl;
}

double Vendedor::totalVentasAnuales()
{
    double total = 0.0;

    for (int i = 0; i < 12; i++)
    {
        total += ventas[i];
    }

    return total;
}