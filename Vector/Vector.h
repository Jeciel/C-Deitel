#ifndef VECTOR_H
#define VECTOR_H

template <typename T>
class Vector{

    public:
        Vector(T);
        T sum(T, T); 
        T getValor();
        void setValor(T);

    private:
        T valor;
};

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

#endif
