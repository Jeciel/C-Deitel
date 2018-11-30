#ifndef TIEMPO_H
#define TIEMPO_H

class Tiempo
{
public:
  //Tiempo();
  Tiempo(int = 0, int = 0, int = 0);
  //SET
  /*void setTiempo(int, int, int);
  void setHora(int);
  void setMinuto(int);
  void setSegundo(int);*/
  //SET con referencia
  Tiempo &setTiempo(int, int, int);
  Tiempo &setHora(int);
  Tiempo &setMinuto(int);
  Tiempo &setSegundo(int);

  int &setHoraIncorrecta(int); //Trampa
  //GET
  int getHora() const;
  int getMinuto() const;
  int getSegundo() const;

  void tictac();
  void imprimirUniversal() const;
  void imprimirEstandar();

private:
  int hora;
  int minuto;
  int segundo;
};

#endif