#include <iostream>
#include <iomanip>
int main()
{
    const int tArreglo = 11;
    int n[tArreglo] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Distribucion Calificaciones" << std::endl;

    for (int i = 0; i < tArreglo; i++)
    {
        if (i == 0)
            std::cout << "0-9";
        else if (i == 10)
            std::cout << "  100: ";
        else
            std::cout << i * 10 << "-" << (i * 10) + 9 << ": ";

        for (int estrellas = 0; estrellas < n[i]; estrellas++)
            std::cout << '*';
        std::cout<<std::endl;
    }

    return 0;
}