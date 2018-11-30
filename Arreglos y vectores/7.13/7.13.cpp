#include <iostream>

void inicArregloStatic(void);
void inicArregloAutomatico(void);

int main(){
    std::cout<< "\nPrimera llamada a la funcion:\n";
    inicArregloStatic();
    inicArregloAutomatico();

    std::cout<< "\n\nSegunda llamada a la funcion:\n";
    inicArregloStatic();
    inicArregloAutomatico();

    std::cout<<std::endl;

    return 0;
    
}

void inicArregloStatic(){
    static int arreglo[3];

    std::cout << "\n Entrar Static: \n";
    for(int i =0; i<3; i++)
        std::cout<<" "<<arreglo[i]<<" ";
    
    std::cout << "\n Salir Static: \n";
    for(int i =0; i<3; i++)
        std::cout<<" "<< (arreglo[i]+=5) <<" ";
}

void inicArregloAutomatico(){
    int arreglo[] = {1, 2, 3, };
    std::cout << "\n Entrar Automatico: \n";
    for(int i =0; i<3; i++)
        std::cout<<" "<<arreglo[i]<<" ";

    std::cout << "\n Salir Automatico: \n";
    for(int i =0; i<3; i++)
        std::cout<<" "<< (arreglo[i]+=5) <<" ";
}