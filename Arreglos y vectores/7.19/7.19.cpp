#include <iostream>
#include <iomanip>

int busquedaLineal(const int [], const int, const int);

int main(){
    /*int tam = 100;
    int arreglo[tam];
    for(int i=0; i<tam; i++)
        arreglo[i] = i *8;
    int num = 8;*/

    std::cout<<std::setw(5)<<"Ingrese el numero que quiere encontrar ";

    //std::cin>>num;
    //std::cout<<" "<<std::endl;
    /*int index = busquedaLineal(arreglo, tam, num);
    if(index!=-1){
        std::cout<<"El indice del numero es "<< index <<" el numero es "<< arreglo[index]<<std::endl;
    }else{
        std::cout<<"No se encontr[o el munero ] "<<std::endl;
    }*/

    return 0;
}

int busquedaLineal(const int arreglo[], int tam, int valor){
    int index=-1;
    for(int i = 0; i<tam; i++){
        if(valor == arreglo[i]){
            index = i;
            i = tam;
        }
    }

    return index;
}