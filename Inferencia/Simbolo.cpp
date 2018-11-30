#include <iostream>

int noSimbol = 55;
int error = 9;
const int grande = 8;
const int peque = 5;

void imprimir(char *);
int catalogar(char);
//void analizar(char *, const int[][grande]);
void analizar(char *, const int[][peque]);


int main(){
    /*
    const int tabla[9][8]=
    {
    {1,2,9,4,9,9,9,9},
    {9,2,3,4,5,6,7,8},
    {1,2,9,4,9,9,9,9},
    {1,9,3,4,5,6,7,8},
    {1,2,9,4,9,9,9,9},
    {1,2,9,4,9,9,9,9},
    {1,2,9,4,9,9,9,9},
    {1,2,9,4,9,9,9,9},
    {1,2,9,4,9,9,9,9},
    };
    */

    const int tabla[][5]=
    {
    {1,2,9,4,9},
    {9,2,3,4,4},
    {1,2,9,4,9},
    {1,2,3,4,4},
    {1,2,9,4,9},
    };

    char sentencia[] = "(AvB)v~(Av~C)^(H=W)";

    //imprimir(sentencia);
    analizar(sentencia, tabla);

    return 0;
}

void imprimir(char *a){
    while(*a != '\0'){
        std::cout<<(int32_t)*a<<std::endl;
        a++;
    }
}

void analizar(char *a, const int tabla[][peque]){
    int codigo = 0;
    int siguiente = 0;

    while(*a != '\0' && siguiente != 9){
        siguiente = tabla[siguiente][catalogar(*a)];
        a++;
    }
    if (*a == '\0')
        std::cout<<"Buena"<<std::endl;
    else
        std::cout<<"Error en "<<*a<<std::endl;

    std::cout<<std::endl;
}


int catalogar(char a){
    int c = (int)a;

    switch(c){
        case 32: //Blank space
                return 9;
        case 40:// (
                return 1;
        case 41: // )
                return 2;
        case 126: // ~
                return 3;
        /*
        case 94: // ^
                return 4;
        case 118: // v  
                return 5;
        case 62: // >
                return 6;
        case 61: // =
                return 7;
        */
        case 94: // ^
                return 4;
        case 118: // v  
                return 4;
        case 62: // >
                return 4;
         case 61: // =
                return 4;
        default: 
                if(c>=65 && c<=90) //Letra mayuscula
                    return 0;
                else    
                    return 9;
    }

    return 9;
}