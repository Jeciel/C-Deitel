#include <iostream>
#include <iomanip>

void imprimir(const int [], int);
void valor(int );

int main(){
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    imprimir(arreglo, 10);
    valor(arreglo[9]);

    return 0;
}

void imprimir(const int arreglo[], const int tam){
    for(int i = 0; i<tam; i++)
        std::cout<<"arreglo["<<i<<"] = "<<std::setw(13)<< arreglo[i]<<std::endl;
}

void valor(int e){
        std::cout<<"valor"<<std::setw(13)<< e <<std::endl;

}

