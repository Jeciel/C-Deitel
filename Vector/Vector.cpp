#include "Vector.h"

template < typename T >
Vector< T >::Vector(T v){
    this->valor = v;
}

template<typename T>
T Vector< T >::sum(T a, T b){
    return a+b;
}

template<typename T>
T Vector< T >::getValor(){
    return this->valor;
}

template<typename T>
void Vector< T >::setValor(T v){
    this->valor = v;
}