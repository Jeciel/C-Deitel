#include <iostream>
#include "Incremento.h"

Incremento::Incremento(int c, int i):cuenta(c), incremento(i){}

void Incremento::imprimir()const{
    std::cout <<"cuenta = "<<cuenta<<"\nIncremento = "<<incremento<<std::endl;
}
