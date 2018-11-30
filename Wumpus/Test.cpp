#include "Objeto.cpp"
#include <iostream>
#include <string>

int main(){
    
    Tablero tablero;  
    tablero.insertar(Wumpus::Objeto("Wumpus", 1, Orientacion::NORTE), 2, 2);
    tablero.imprimir();
    
    return 0;
}