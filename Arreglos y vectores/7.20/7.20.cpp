#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

void ordenar(int arreglo[], int);
int main(){
    std::srand(std::time(0));

    const int tam = 10;
    int datos[tam];

    for(int i=0; i<tam; i++)
        datos[i] = 1 + rand()%100;
    
    for(int i=0; i<tam; i++)
        std::cout<<datos[i]<<std::endl;

    std::cout<<std::endl;

    ordenar(datos, tam);

    for(int i=0; i<tam; i++)
        std::cout<<datos[i]<<std::endl;

    std::cout<<" "<<std::endl;
    return 0;
}

void ordenar(int arreglo[], int tam){
    
    int insertar;
    
    for(int siguiente = 1; siguiente < tam; siguiente++)
    {
        insertar  = arreglo[siguiente];
        int  mover = siguiente;
        std::cout<< arreglo[mover-1]<< " " <<insertar<<std::endl;
        
        while( (mover>0 )&& (arreglo[mover-1] > insertar)){
            arreglo[mover] = arreglo[mover -1];
            mover--;
        }

        arreglo[mover] = insertar;

    }

}