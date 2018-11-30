#include "Incremento.h"

int main(){
    Incremento valor(2, 2);
    valor.imprimir();
    for(int i=0; i<19; i++){
        valor.agregarIncremento();
        valor.imprimir();
    }
    return 0;
}