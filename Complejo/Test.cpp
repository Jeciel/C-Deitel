#include "Complejo.h"
#include <iostream>

int main(){
    Complejo c1 = Complejo(3, 7);
    Complejo c2 = Complejo(2, 4);

    Complejo s = c1.suma(&c1, &c2);
    Complejo a = c1+c2;
    s.imprimir();
    a.imprimir();

    std::cout<<"Son iguales? "<<((a==s)?"True":"False")<<std::endl;
    return 0;
}