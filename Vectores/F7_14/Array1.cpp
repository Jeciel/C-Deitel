#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

void modificarArreglo(int[], int);
void imprimirArreglo(const int[], const int);
void modificarElemento(int);

int main()
{
    const int tam = 5;
    int a[tam] = {0, 1, 2, 3, 4};

    cout << "Efectos de pasar todo el arreglo por referencia" << endl<< "los valores originales son ";
    
    imprimirArreglo(a, tam);
    modificarArreglo(a, tam);
    imprimirArreglo(a, tam);

    cout<<"modificacmos un elemento"<<endl;
    modificarElemento(a[3]);
    imprimirArreglo(a, tam);

    return 0;
}

void imprimirArreglo(const int arreglo[], const int tam){
    for(int i =0; i<tam; i++)
        cout<<arreglo[i]<<" ";
    cout<<""<<endl;
}

void modificarArreglo(int arreglo[], int tam){
    for(int i =0; i<tam; i++)
        arreglo[i]++;

}

void modificarElemento(int elemento){
    elemento++;
}