#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "../Fecha/Fecha.h"

class Empleado
{
  public:
    Empleado(const char *const, const char *const, const Fecha &, const Fecha &);
    const char *getPrimerNombre() const;
    const char *getApellidoPaterno() const;
    static int getCuenta();
    void imprimir() const;
    ~Empleado();

  private:
    char *primerNombre;
    char *apellidoPaterno;
    const Fecha fechaNacimiento;
    const Fecha fechaContratacion;
    static int cuenta;
};
#endif