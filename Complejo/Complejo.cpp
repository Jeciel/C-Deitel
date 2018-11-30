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
    parteReal = pi;
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
}

Complejo Complejo::resta(Complejo * a, Complejo * b)
{
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