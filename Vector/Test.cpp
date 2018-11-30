#include "Vector.h"
#include <iostream>

int main(){
    Vector<float> v1(4.2), v2(3.3);

    std::cout<< v1.sum(v1.getValor(), v2.getValor())<<std::endl;
    
    return 0;
}