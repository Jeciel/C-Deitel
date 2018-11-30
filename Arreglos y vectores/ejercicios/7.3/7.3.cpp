#include <iostream>
#include <iomanip>

const int tam = 10;

void imprimir(const int *);
void imprimir(int[][tam]);
void imprimir(const char * );
void ordenar( int * const );

int main(){

    int arreglo[tam] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
    
    const char c[tam] = {'h', 'o', 'l', 'a', 'M', 'u', 'n', 'd', 'o', '\0'}; // const char Hace constante a los valores 
    
    const char d[tam] = {'h', 'o', 'l', 'a', 'M', 'u', 'n', 'd', 'o', '\0'}; // const char Hace constante a los valores 

    std::cout<<std::setw(20)<<"c == d ";
    if(c == d){
        std::cout<<"Iguales "<<std::endl;
    }else{
        std::cout<<"Diferentes "<<std::endl;
    }

    std::cout<<std::setw(20)<<"&c[0] == &d[0] ";

    if(&c[0] == &d[0]){
        std::cout<<"Iguales "<<std::endl;
    }else{
        std::cout<<"Diferentes "<<std::endl;
    }

    std::cout<<std::setw(20)<<"*&c[0] == *&d[0] ";

    if(*&c[0] == *&d[0]){
        std::cout<<"Iguales "<<std::endl;
    }else{
        std::cout<<"Diferentes "<<std::endl;
    }

    std::cout<<std::endl;

    std::cout<<std::endl;


    const char *inicio = &c[0];
    const char *fin = &c[tam-1];

    std::cout<<std::setw(10)<<"&inicio "<<inicio<<std::endl;
    std::cout<<std::setw(10)<<"&*inicio "<<&*inicio<<std::endl;
    std::cout<<std::setw(10)<<"*&inicio "<<*&inicio<<std::endl;
    std::cout<<std::setw(10)<<"*++inicio "<<*++inicio<<std::endl;
    std::cout<<std::setw(10)<<"inicio "<<inicio<<std::endl;
    
    std::cout<<std::setw(10)<<"&*c "<<&*c<<std::endl;
    std::cout<<std::setw(10)<<"*&c "<<*&c<<std::endl;
    std::cout<<std::setw(10)<<"*c "<<*c<<std::endl;
    std::cout<<std::setw(10)<<"c "<<c<<std::endl;

    std::cout<<std::endl;



    //std::cout<<c<<std::endl;
    /*std::cout<<inicio<<std::endl;

    while(*inicio != '\0')
    {
        std::cout<<&inicio<<std::endl;
        inicio++;
    }

    std::cout<<std::endl;*/

    
    /*for(int i=0; i<tam; i++){
        //std::cout<<&c[i]<<std::endl;
        std::cout<<c++<<std::endl;
    }*/
    

    //ordenar(arreglo);
    /*imprimir(arreglo);
    imprimir(c);
    imprimir(arreglo);
    */
    std::cout<<std::endl;


    int m[tam][tam];

    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            m[i][j] = i+j;
        }
    }

    //imprimir(m);

    return 0;

}

void imprimir(const int * arreglo){ 
    for(int i = 0; i<tam; i++)
        std::cout<<*arreglo++<<" ";
    std::cout<<std::endl;
}

void imprimir(const char * c){
    for(int i = 0; i<tam; i++)
    {
        std::cout<<c[i];
    }

    std::cout<<std::endl;

    while(*c != '\0')
    {
        std::cout<<*c++;
    }
    std::cout<<std::endl;
}

void imprimir(int arreglo[][tam]){
    for(int i = 0; i<tam; i++){
        for(int j = 0; j<tam; j++)
            std::cout<<arreglo[i][j]<<" ";
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void ordenar(int * arreglo){
    for(int i =0; i<tam-1; i++){
        for(int j =i; j<tam; j++)
        {
            //std::cout<<*arreglo<<std::endl;
            if(arreglo[i]>arreglo[j])
            {
                int a = arreglo[i];
                arreglo[i]  = arreglo[j];
                arreglo[j] = a;
            }
        }
    }
}