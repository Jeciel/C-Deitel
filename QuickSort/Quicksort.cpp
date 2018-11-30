#include <iostream>
#include <cstdlib>
#include <ctime>

void quickSort(int *, const unsigned int);

int main()
{
    std::srand(std::time(0));
    const unsigned int tam = 100;
    int arreglo[tam];

    for (int i = 0; i < tam; i++)
    {
        arreglo[i] = 1 + std::rand() % 100;
    }

    std::cout << "Arreglo sin ordenar " << std::endl;

    for (int i = 0; i < tam; i++)
    {
        std::cout << arreglo[i] << " ";
    }

    std::cout << std::endl;

    quickSort(arreglo, tam);

    std::cout << "Arreglo ordenado " << std::endl;

    for (int i = 0; i < 100; i++)
    {
        std::cout << arreglo[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

void quickSort(int *arregloPtr, const unsigned int tam)
{

    int i = 0, t = tam - 1; //i limite inferior, t limite superior
    bool direccion = true;  //true compara i con t, false compara t con i

    while (i != t)
    {
        if (i >= 0 && i <= tam - 1 && t >= 0 && t <= tam - 1)
        { //Evitar que los indices se salgan del arreglo
            /*
            if(direccion)
                std::cout<<"Comparamos "<<arregloPtr[i]<<" y "<<arregloPtr[t]<<std::endl;
            else
                std::cout<<"Comparamos "<<arregloPtr[t]<<" con "<<arregloPtr[i]<<std::endl;
            */

            if (arregloPtr[i] > arregloPtr[t])
            { // si
                /*
                if(direccion)
                    std::cout<<"Cambiamos "<<arregloPtr[i]<<" y "<<arregloPtr[t]<<std::endl;
                else
                    std::cout<<"Cambiamos "<<arregloPtr[t]<<" con "<<arregloPtr[i]<<std::endl;
                */
                int temp = arregloPtr[i];
                arregloPtr[i] = arregloPtr[t];
                arregloPtr[t] = temp;

                if (direccion)
                    i++;
                else
                    t--;

                direccion = !direccion;
            }
            else
            {
                if (direccion) // si estamos comparando i con t decrementamos el limite superior
                    t--;
                else
                    i++; // si estamos comparando t con i incrementamos el limite inferior
            }
        }
    }

    //std::cout<<"i "<<i<<" t "<<t<<std::endl;

    if (i > 1) // si el arreglo a ordenar es mayor a 1 elemento
        quickSort(&arregloPtr[0], i);
    if (1 < tam - (1 + i)) // si el arreglo a ordenar es mayor a 1 elemento
        quickSort(&arregloPtr[i + 1], tam - (1 + i));
}
