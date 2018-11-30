#include <iostream>
#include <cctype>

void convertirMayusculas(char *);
void imprimirCaracteres(const char *);


int main(){
    char frase[] = "caracteres y $34.51";
    
    std::cout<< "La frase antes de la conversi[on es :"<< frase<<std::endl;
    convertirMayusculas(frase);
    std::cout<< "\nLa frase despues de de la conversacion es: "<<frase<<std::endl;
    
    imprimirCaracteres(frase);

    return 0;
}

void convertirMayusculas(char *sPtr){

    while(*sPtr != '\0'){
        if(islower(*sPtr))
            *sPtr = toupper(*sPtr);
        sPtr++;
    }
}

void imprimirCaracteres(const char *sPtr){

    for(; *sPtr != '\0'; sPtr++){
        std::cout << *sPtr;
    }
}