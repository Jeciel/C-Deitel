#ifndef FECHA_H
#define FECHA_H

class Fecha
{

public:
  Fecha(int = 1, int = 1, int = 1900);
  ~Fecha();
  bool setFecha(int, int, int);
  void imprimir() const;

  bool siguienteDia();

  bool sumDia(int);
  bool sumMes(int);
  bool sumAnio(int);

  int getMes() const;
  int getDia() const;
  int getAnio() const;

  bool validar(int, int, int);
  bool validar();
  int getNumDias(int, int, int);
  int getNumDias();

private:
  enum TAM : int
  {
    ANIO = 365,
    BISIESTO = 366
  };
  void setMes(int);
  void setDia(int);
  void setAnio(int);

  bool esBisiesto(int);
  bool esBisiesto();

  const int febBisiesto = 29;
  const int febNoBisiesto = 28;

  const int *meses[12] = {new const int(31), &febBisiesto, new const int(31), new const int(30), new const int(31), new const int(30), new const int(31), new const int(31), new const int(30), new const int(31), new const int(30), new const int(31)};

  int mes;
  int dia;
  int anio;
};
#endif