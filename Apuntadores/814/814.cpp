#include <Matrices.h>
#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;

void ordenamientoSeleccion(int * const, const int);
void intercambiar(int * const, int * const);

int main()
{
    const int tam = 10;
    int a[tam] = {45, 98, 2, 1, 76, 1, 32, 49, 98, 48};

    cout << "Los elementos son: " << endl;
    for (int i = 0; i < tam - 1; i++)
        cout << setw(4) << a[i] << " ";

    cout << endl;

    ordenamientoSeleccion(a, tam);

    for (int i = 0; i < tam - 1; i++)
        cout << setw(4) << a[i] << " ";

    cout << endl;

    return 0;
}

void ordenamientoSeleccion(int * const arr,  const int t)
{
    int menor;

    for (int i = 0; i < t - 1; i++)
    {
        menor = i;
        for (int j = i + 1; j < t; j++)
        {
            if (arr[j] < arr[menor])
                menor = j;
        }
        intercambiar(&arr[i], &arr[menor]);
    }
}

void intercambiar(int * const elementoPtr, int * const elemento2Ptr)
{
    int contenido = *elementoPtr;
    *elementoPtr = *elemento2Ptr;
    *elemento2Ptr = contenido;
}