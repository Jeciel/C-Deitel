#include <iostream>

void imprimir(char[][12], int);
void recorrerLaberinto(char[][12], int, int, int, int);

int main()
{

    const int tam = 12;
    int const coordXinicio = 0, coordYinicio = 2, coordXfinal = 11, coordYfinal = 4;

    char laberinto[][tam] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
        {'.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
        {'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
        {'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};

    
    recorrerLaberinto(laberinto, coordXinicio, coordYinicio, coordXfinal, coordYfinal);

    //std::cout<<laberinto[coordYinicio][coordXinicio]<<std::endl;
    //std::cout<<laberinto[coordYfinal][coordXfinal]<<std::endl;

    return 0;
}

void imprimir(char laberinto[][12], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            std::cout << " " << laberinto[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void recorrerLaberinto(char laberinto[][12], int xi, int yi, int xf, int yf){
    int x = xi, y = yi;

    while(x!=xf && y!= yf){//mientras no encontremos en final del laverinto
       
    }

    imprimir(laberinto, 12);
}