#include "Matriz.h"
#include <iostream>

Matriz::Matriz():constante(0), dim(0){
}

Matriz::Matriz(int dim):constante(8), dim(dim){
}

int Matriz::getDim(){
    return this->dim;
}

int Matriz::getConstante(){
    return this->constante;
}

Matriz::~Matriz(){
    std::cout<<"Destruido"<<std::endl;
    std::cout<<"Dimension "<<getDim()<<std::endl;
    std::cout<<"Constante "<<getConstante()<<std::endl;
}

void amiga(Matriz &obj){
    obj.dim = 45;
}