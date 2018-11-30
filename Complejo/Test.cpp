#include "Complejo.h"
int main(){
    Complejo c1 = Complejo();
    Complejo c2 = Complejo(2, 4);

    Complejo s = c1.suma(&c1, &c2);
    s.imprimir();
    return 0;
}