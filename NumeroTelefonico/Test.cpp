#include "NumeroTelefonico.h"

int main(){
    NumeroTelefonico telefono;

    std::cout<<"Escriba el numero telefonico en la forma (123) 456-7890"<<std::endl;

    std::cin >>telefono;

    std::cout<<"El numero telefonico introduciod fue";

    std::cout<<telefono<<std::endl;

    return 0;
}