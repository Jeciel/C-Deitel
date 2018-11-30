#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "MazoDeCartas.h"

MazoDeCartas::MazoDeCartas():top(0){
    int *mazoPtr = getMazo();

    for(int i = 0; i<numCartasMazo; i++){        
            mazoPtr[i] = i+1;   
    }

    std::srand(std::time(0));
}

int* MazoDeCartas::getMazo(){
    return mazo;
}

void MazoDeCartas::barajar(int *mazoPtr){
    int carta = 0;
    int cambio = 0;

    for(int seleccion = 0; seleccion<numCartasMazo; seleccion++){
        carta = mazoPtr[seleccion];
        cambio = std::rand()%numCartasMazo;
        mazoPtr[seleccion] = mazoPtr[cambio];
        mazoPtr[cambio] = carta;
    }
}

void MazoDeCartas::mostrar(int *mazoPtr, int tam){
    int carta = 0;

    for(int i = 0; i<tam; i++){
        carta = mazoPtr[i];
        mostrar(carta);
        std::cout<<(i%2 == 0?'\n':'\t');
    }
}

void MazoDeCartas::mostrar(int carta){
    static const char *palo[palos] = {"Corazones","Diamantes","Bastos","Espadas"};
    //static const char *cara[caras] = {"As","Dos","Tres","Cuatro","Cinco","Seis","Siete","Ocho","Nueve","Diez","Sota","Reina","Rey"};
    static const char *cara[caras] = {"As","2","3","4","5","6","7","8","9","10","J","Q","K"};

    if(carta > 0 && carta<=numCartasMazo){
        std::cout<<std::setw(6)<<std::right<<cara[getNumero(carta)]<<" de "<<std::setw(8)<<std::left<<palo[getPalo(carta)];
    }else {
        std::cout<<std::setw(6)<<std::right<<" No "<<" hay "<<std::setw(8)<<std::left<<" Carta ";
    }
}

int MazoDeCartas::getCarta(){
    if(top<numCartasMazo)
    {
        int carta = getMazo()[top];
        getMazo()[top++] = 0;
        return carta;
    }
    else
        return 0;
}

void MazoDeCartas::repartir(int* mano, int tam){
    
    for(int i = 0; i<tam; i++){
        mano[i] = getCarta();
    }
}

int MazoDeCartas::getNumero(int carta)const{
    return (carta -1) - getPalo(carta)*caras;
}

int MazoDeCartas::getPalo(int carta)const{
    return int((carta - 1)/caras);
}

void MazoDeCartas::ordenar(int* mano, int tam){
    for(int i = 0; i<tam; i++)
        for(int j = i+1; j<tam; j++){
            if(getNumero(mano[i])>getNumero(mano[j])){
                int temp = mano[i];
                mano[i] = mano[j];
                mano[j] = temp;
            }
        }
}

int MazoDeCartas::calcular(int* mano, int tamMano){
    ordenar(mano, tamMano);

    if(escalera(mano, tamMano)){
        std::cout<<"Escalera";
        return 6;
    }
    else if(flush(mano, tamMano)){
        std::cout<<"Flush";
        return 5;
    }
    else if(cuarta(mano, tamMano)){
        std::cout<<"Cuarta";
        return 4;
    }
    else if(tercia(mano, tamMano)){
        std::cout<<"Tercia";
        return 3;
    }
    else if(doble(mano, tamMano)){
        std::cout<<"Par Doble";
        return 2;
    }
    else if(pares(mano, tamMano)){
        std::cout<<"Par";
        return 1;
    }
    else{
        std::cout<<"Nada";
        return 0;
    }
    return 0;
}

bool MazoDeCartas::pares(int* mano, int tamMano){
    
    for(int i = 0; i<tamMano-1; i++){
        if(getNumero(mano[i]) == getNumero(mano[i+1]))
            return true;
    }

    return false;
}

bool MazoDeCartas::tercia(int* mano, int tamMano){
    
    for(int i = 0; i<tamMano-2; i++){
        if(getNumero(mano[i]) == getNumero(mano[i+1]) && getNumero(mano[i]) == getNumero(mano[i+2]))
            return true;
    }

    return false;
}

bool MazoDeCartas::cuarta(int* mano, int tamMano){
    
    for(int i = 0; i<tamMano-3; i++){
        if(getNumero(mano[i]) == getNumero(mano[i+1]) && getNumero(mano[i]) == getNumero(mano[i+2]) && getNumero(mano[i]) == getNumero(mano[i+3]))
            return true;
    }

    return false;
}

bool MazoDeCartas::doble(int* mano, int tamMano){
    int pares = 0;
    for(int i = 0; i<tamMano-1; i++){
        if(getNumero(mano[i]) == getNumero(mano[i+1]))
           pares ++;
    }
    if (pares == 2)
        return true;
    return false;
}

bool MazoDeCartas::flush(int* mano, int tamMano){
    for(int i = 0; i<tamMano-1; i++){
        if(getPalo(mano[i]) != getPalo(mano[i+1]))
            return false;
    }
    return true;
}

bool MazoDeCartas::escalera(int* mano, int tamMano){
    for(int i = 0; i<tamMano-1; i++){
        if(getNumero(mano[i]) != (getNumero(mano[i+1])-1))
            return false;
    }
    return true;
}

//int* carta
void MazoDeCartas::cambio(int* cartaPtr){
    int cambio = std::rand()%(numCartasMazo-top) + top;
    
    int carta = *cartaPtr;
    *cartaPtr = mazo[top];

    mazo[top] = mazo[cambio];
    mazo[cambio] = carta;
    
}

void MazoDeCartas::repartidor(int *mano, int tam){
    
    switch(calcular(mano, tam)){
        case 0:
                for(int i = 0; i<tam; i++){
                    cambio(&mano[i]);
                }
        break;
        case 1:
              for(int i = 0; i<tam; i++){
                    if(i == tam-1 || getNumero(mano[i]) != getNumero(mano[i+1])){
                        cambio(&mano[i]);
                    }else
                    {
                        i++;
                    }
                }
        break;
        case 2:
                for(int i = 0; i<tam; i++){
                    if(i == tam-1 || getNumero(mano[i]) != getNumero(mano[i+1])){
                        cambio(&mano[i]);
                    }else
                    {
                        i++;
                    }
                }
        break;
        case 3:

        break;
    }
}