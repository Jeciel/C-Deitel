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

void Complejo::imprimir()
{
    std::cout<<std::setprecision(2)<<getParteReal()<<" + "<<getParteImaginaria()<<"i"<<std::endl;
}

////////////////////////////Sobrecarga de operadores//////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

//Igualdad Complejo == Complejo
bool Complejo::operator==(const Complejo &a) const{
   return (parteReal == a.parteReal && parteImaginaria == a.parteImaginaria);
}

//Suma Complejo + Complejo
Complejo Complejo::operator+(const Complejo &a){
    return Complejo(this->getParteReal()+ a.parteReal, this->getParteImaginaria()+a.parteImaginaria);
}

//Resta Complejo - Complejo
Complejo Complejo::operator-(const Complejo &a){
    return Complejo(this->getParteReal()- a.parteReal, this->getParteImaginaria()-a.parteImaginaria);
}

//Iguldad Complejo == Double
bool Complejo::operator==(const double a) const{
   return (parteReal == a && parteImaginaria == 0);
}

//Suma Complejo + Double 
Complejo Complejo::operator+(const double a){
    return Complejo(this->getParteReal()+ a, this->getParteImaginaria()+a);
}

//Resta Complejo - Double
Complejo Complejo::operator-(const double a){
    return Complejo(this->getParteReal()- a, this->getParteImaginaria()-a);
}

//Multiplicacion Complejo * Double
Complejo Complejo::operator*(const double a){
    return Complejo(this->getParteReal()*a, this->getParteImaginaria()*a);
}

/*Complejo suma( Complejo * a, Complejo * b)
{
    if (a != NULL && b != NULL)
    {   
        return Complejo(a->getParteReal() + b->getParteReal(), a->getParteImaginaria()+b->getParteImaginaria());
    }
    return NULL;
}
*/