#include <iostream>
#include <cstdlib>
#include <ctime>

void adelante(unsigned int * tortuga, unsigned int posiciones);
void atras(unsigned int * tortuga, unsigned int posiciones);

int main(){
    const unsigned int meta = 70;
    unsigned int liebre = 0, tortuga = 0, accion = 0, porcentaje = 0;

    std::srand(std::time(0));
    std::cout<<"Carrera entre la Tortuga y la Liebre\nPUM!!!\nARRANCAN!!!\n"<<std::endl;


    while(liebre < meta && tortuga < meta){
        porcentaje = 1 + std::rand()%10;
        
        std::cout<<"La Tortuga ";
        
        //Tortuga
        if(porcentaje>0 && porcentaje <= 5){
            std::cout<<"camina a todo vapor"<<std::endl;
            adelante(&tortuga, 3);      //Paso pesdo rápido
        } 
        else if(porcentaje>5 && porcentaje <= 7){
            std::cout<<" tropieza con una cáscara de nuez !!!"<<std::endl;
            atras(&tortuga, 6);         //Resbalón
        }
        else if(porcentaje>7 && porcentaje <= 10){
            std::cout<<"camina lenta pero segura"<<std::endl;
            adelante(&tortuga, 1);      //Paso pesado lento
        }
        
        std::cout<<"La Liebre ";

        porcentaje = 1 + std::rand()%10;

        //Liebre
        if(porcentaje>0 && porcentaje <= 2){
            std::cout<<" da un GRAN salto !!!"<<std::endl;
            adelante(&liebre, 9);      //Gran Salto
        }
        else if(porcentaje>2 && porcentaje <= 3){
            std::cout<<" se revala con una cáscara de platano!!!"<<std::endl;
            atras(&liebre, 9);      //Gran resbalón            
        }
        else if(porcentaje>3 && porcentaje <= 6){
            std::cout<<" da un pequeño salto"<<std::endl;
            adelante(&liebre, 1);      //Peque;o salto
        }
        else if(porcentaje>6 && porcentaje <= 8){
            std::cout<<" resvala con una cáscara de nuez"<<std::endl;    
            atras(&liebre, 2);      //pequeño resbalón
        }
        else{
            std::cout<<" toma una siesta ZZZzz"<<std::endl;    
        }

        for(unsigned int i = 0; i<meta; i++){

            std::cout<<" "<<(((tortuga == liebre)&&(i == tortuga))?"OUCH!!":((i == tortuga)?("T"):((i == liebre)?("L"):(" "))));
        }
        std::cout<<"META!!\n"<<std::endl;
    }

    std::cout<<"Ganó la " << ((liebre >=70)?("Liebre !!!\n"):("Tortuga !!!\n"));
    

    return 0;

}

void adelante(unsigned int *animal, unsigned int posiciones){
    
    unsigned int contador = 0;

    while(contador != posiciones){
        *animal = *animal + 1;
        contador++;
    }
}

void atras(unsigned int *animal, unsigned int posiciones){
    
    unsigned int contador = 0;

    while(*animal > 0 && contador != posiciones){
        *animal = *animal - 1;
        contador++;
    }
}
