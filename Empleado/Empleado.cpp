#include "Empleado.h"
#include "../Fecha/Fecha.h"

#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;
using std::strncpy;

int Empleado::cuenta = 0;
int Empleado::getCuenta()
{
    return cuenta;
}

Empleado::Empleado(const char *const nombre, const char *const apellido, const Fecha &fechaDeNacimiento, const Fecha &fechaDeContratacion) : fechaNacimiento(fechaDeNacimiento), fechaContratacion(fechaDeContratacion)
{
    //Nombre
    primerNombre = new char[strlen(nombre) + 1];
    strcpy(primerNombre, nombre);

    //apellido
    apellidoPaterno = new char[strlen(apellido) + 1];
    strcpy(apellidoPaterno, apellido);
    cuenta++;

    cout << "Constructor del objeto Empleado: " << primerNombre << " " << apellidoPaterno << endl;
}

Empleado::~Empleado()
{
    cout << "Destructor del objeto empleado: " << this->getApellidoPaterno() << ", " << this->getPrimerNombre() << endl;
    delete[] primerNombre;
    delete[] apellidoPaterno;
    cuenta--;
}

void Empleado::imprimir() const
{
    cout << this->getApellidoPaterno() << ", " << this->getPrimerNombre() << "Contratacion ";
    fechaContratacion.imprimir();
    cout << " Nacimiento: ";
    fechaNacimiento.imprimir();
    cout << endl;
}

const char *Empleado::getPrimerNombre() const
{
    return primerNombre;
}

const char *Empleado::getApellidoPaterno() const
{
    return apellidoPaterno;
};
