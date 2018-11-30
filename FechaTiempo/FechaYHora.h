#ifndef FECHAYHORA_H
#define FECHAYHORA_H

class FechaYHora
{
  public:
    FechaYHora();
    bool setFecha(int, int, int);
    void imprimirFecha();

    bool siguienteDia();

    bool sumDia(int);
    bool sumMes(int);
    bool sumAnio(int);

    int getMes();
    int getDia();
    int getAnio();

    bool validar(int, int, int);
    bool validar();
    int getNumDias(int, int, int);
    int getNumDias();

    void setTiempo(int, int, int);
    void setHora(int);
    void setMinuto(int);
    void setSegundo(int);
    int &setHoraIncorrecta(int); //Trampa
    int getHora();
    int getMinuto();
    int getSegundo();
    void tictac();

    void imprimirUniversal();
    void imprimirEstandar();

  private:
    int hora;
    int minuto;
    int segundo;

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