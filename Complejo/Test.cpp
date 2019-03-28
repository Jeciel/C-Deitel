#include "Complejo.h"
#include <iostream>

int main(){
    double doub= 3.0;
    Complejo c1 = Complejo(3, 7);
    Complejo c2 = Complejo(2, 4);

    Complejo s = c1 + c2;
    Complejo a = c1+c2;
    s.imprimir();
    a.imprimir();

    std::cout<<"Son iguales? "<<((a==s)?"True":"False")<<std::endl;
    Complejo d = a*doub;
    d.imprimir();
    return 0;
}