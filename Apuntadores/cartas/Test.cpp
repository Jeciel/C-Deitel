#include "MazoDeCartas.h"
#include <iostream>

int main(){
    MazoDeCartas *mazoDeCartas;
    char continuar = 'y';

    while(continuar == 'y'){

        
    }
    mazoDeCartas = new MazoDeCartas;

    const int numJugadores = 2;
    const int tamMano = 5;
    int *jugadores[numJugadores];

    //Generamos Jugadores
    for(int i = 0; i<numJugadores; i++){
        jugadores[i] = new int[tamMano]; 
        
        for(int j = 0; j<tamMano; j++)
            (jugadores[i])[j] = 0;
    }

    //BARAJAMOS
    mazoDeCartas->barajar(mazoDeCartas->getMazo());
    mazoDeCartas->barajar(mazoDeCartas->getMazo());

    //REPARTIMOS
    for(int i = 0; i<numJugadores; i++){
        mazoDeCartas.repartir(jugadores[i], tamMano);
    }
    
    //Preguntamos si quieres cambiar alguna carta
    char cambiar = 'Y';
    int cartaCambio = 0;
    
    while(cambiar == 'Y' || cambiar == 'y')
    {
        //Mostramos tu mano
        mazoDeCartas.mostrar(jugadores[1], tamMano);

        std::cout<<"Deseas cambiar una carta? [Y]/[N]"<<std::endl;
        std::cin>>cambiar;

        if(cambiar == 'Y' || cambiar == 'y'){
            
            std::cout<<"Que carta quieres cambiar? [Y]/[N]"<<std::endl;
            
            //Mostramos tu mano
            for(int i = 0; i <tamMano; i++){
                std::cout<<i<<":";
                mazoDeCartas.mostrar((jugadores[1])[i]);
                std::cout<<std::endl;
            }

            std::cin>>cartaCambio;

            if(cartaCambio >= 0 && cartaCambio<tamMano){
                mazoDeCartas.cambio(&(jugadores[1])[cartaCambio]);
            }
        }
    }//fin While 
    
    std::cout<<"Mano del repartidor"<<std::endl;
    mazoDeCartas.calcular(jugadores[0], tamMano);

    //Mostrar mano del Repartidor
    mazoDeCartas.mostrar(jugadores[0], tamMano);

    //Repartidor
    mazoDeCartas.repartidor(jugadores[0], tamMano);

    int ganador = 0;

    //MOSTRAMOS LAS MANOS
    for(int i = 0; i<numJugadores; i++){

        std::cout<<"\nEl jugador "<<i<<" tiene ";
        
        if(ganador<mazoDeCartas.calcular(jugadores[i], tamMano)){
            ganador = i;
        }

        std::cout<<std::endl;

        mazoDeCartas.mostrar(jugadores[i], tamMano);
    }

    std::cout<<std::endl;

    std::cout<<"El jugador "<<ganador<<" a ganado "<<std::endl;
    mazoDeCartas.mostrar(jugadores[ganador], tamMano);

    std::cout<<std::endl;

    if(ganador == 1)
    {
        std::cout<<"Ganaste!!!"<<std::endl;
    }else{
        std::cout<<"Perdiste :("<<std::endl;
    }

    //MOSTRAMOS EL MAZO
    //mazoDeCartas.mostrar(mazoDeCartas.getMazo(), mazoDeCartas.numCartasMazo);
    
    return 0;
}

