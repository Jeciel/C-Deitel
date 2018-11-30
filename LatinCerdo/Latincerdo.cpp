//Latin cerdo es un lenguaje codificado en el cu[al se pasa la primer letra de la palabra al final y se agrega ae
//ej: salta, la letra s se pasa al final, altas, y se agrega ae, altasae.
#include <cstring>
#include <iostream>

int main(){
    char *tokenPtr;
    char enunciado[80];
    std::cin.getline(enunciado, 80, '\n');
    tokenPtr = std::strtok(enunciado, " ");
    

    while(tokenPtr != NULL){
        
        char palabra[std::strlen(tokenPtr)+2] = {"\0"};
        std::strcat(palabra, &tokenPtr[1]);
        std::strncat(palabra, tokenPtr, 1);
        std::strcat(palabra, "ae");
        std::cout<<palabra<<" ";
        tokenPtr = std::strtok(NULL,  " ");
    }

    std::cout<<std::endl;

    return 0;
}