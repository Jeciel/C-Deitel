#include "Implementacion.h"
#include "Interfaz.h"

Interfaz::Interfaz(int v):ptr(new Implementacion(v)){}

void Interfaz::setValor(int v){
    ptr->setValor(v);
}

int Interfaz::getValor()const{
    return ptr->getValor();
}

Interfaz::~Interfaz(){
    delete ptr;
    ptr = 0;
}