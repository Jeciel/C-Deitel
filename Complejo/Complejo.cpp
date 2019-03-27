#include "Complejo.h"
#include <stddef.h>
#include <iostream>
#include <iomanip>


Complejo::Complejo(double pr, double pi)
{
    setParteReal(pr);
    setParteImaginaria(pi);
}
void Complejo::setParteReal(double pr)
{
    parteReal = pr;
}

void Complejo::setParteImaginaria(double pi)
{
    parteImaginaria = pi;
}

double Complejo::getParteReal(){
    return parteReal;
}

double Complejo::getParteImaginaria(){
    return parteImaginaria;
}

Complejo Complejo::suma( Complejo * a, Complejo * b)
{
    if (a != NULL && b != NULL)
    {   
        return Complejo(a->getParteReal() + b->getParteReal(), a->getParteImaginaria()+b->getParteImaginaria());
    }
    return NULL;
}

Complejo Complejo::resta(Complejo * a, Complejo * b)
{
    //TODO agragar una excepcion a null
    if (a != NULL && b != NULL)
    {   
        return Complejo(a->getParteReal() - b->getParteReal(), a->getParteImaginaria()-b->getParteImaginaria());
    }
    return NULL;
}

void Complejo::imprimir()
{
    std::cout<<std::setprecision(2)<<getParteReal()<<" + "<<getParteImaginaria()<<"i"<<std::endl;
}

//Sobrevcarga de operadores
bool Complejo::operator==(const Complejo &a) const{
   return (parteReal == a.parteReal && parteImaginaria == a.parteImaginaria);
}

Complejo Complejo::operator+(const Complejo &a){
    return Complejo(this->getParteReal()+ a.parteReal, this->getParteImaginaria()+a.parteImaginaria);

}


Complejo suma( Complejo * a, Complejo * b)
{
    if (a != NULL && b != NULL)
    {   
        return Complejo(a->getParteReal() + b->getParteReal(), a->getParteImaginaria()+b->getParteImaginaria());
    }
    return NULL;
}