//Ejemplo del libro C[omo programar en C++, capitulo 9, fig.9.1, 9.2, 9.3
#include <iostream>
#include "Tiempo.h"

int main()
{
    Tiempo t1(23, 59, 50);
    Tiempo t2;
    t2.setHora(24).setMinuto(9).setSegundo(45);

    //t.setHora(12);
    //t2.setHora(14);
    /*for(int i = 0; i <70; i++){
        t.tictac();
        t.imprimirEstandar();
    }*/
    t1.imprimirEstandar();
    t2.imprimirUniversal();
    return 0;
}
