#include "FechaYHora.h"

int main(){
    FechaYHora f;
    f.setTiempo(23, 59, 59);
    f.setFecha(31,12,1999);
    f.imprimirUniversal();
    f.tictac();
    f.imprimirUniversal();
    
    return 0;
}