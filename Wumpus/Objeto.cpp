#include <string>
#include "Orientacion.cpp"
#include <iostream>
#include <iomanip>

const int cosas = 4;
const int tamanio = 4;

class Objeto{

    private:
        const std::string nombre;
        int velocidad;
        Orientacion direccion;

    public:
        Objeto(std::string a, int b, Orientacion c)
        :nombre(a), velocidad(b), direccion(c){}

        std::string getNombre() const{
            return nombre;
        }

        void comportamiento(){}
};

class Wumpus : public Objeto{
    /*Wumpus(){
        nombre = "Wumpus";
    }*/
};

class Casilla{
    public:
        Objeto *objetos[4];

        Casilla(){
            for(int i=0; i<cosas; i++)
                objetos[i] = NULL;
        }

        bool insertarObjeto(Objeto o){
            for(int i=0; i<cosas; i++)
            {
                if(objetos[i]==NULL)
                {
                    objetos[i] = &o;
                    return true;
                }
            }

            return false;
        }
};

class Tablero{
    public:
        Casilla casillas[tamanio][tamanio];
        
        bool insertar(Objeto o, int r, int c){
            if(r<=tamanio && c<=tamanio){
                if(casillas[r][c].insertarObjeto(o))
                    return true;
                else
                    return false;
            }else{
                std::cout<<"Coordenadas Incorectas"<<std::endl;
                return false;
            }
        }

        //Imprime el tablero
        void imprimir() const {
            for(int l = 0; l<tamanio; l++)
            {
                for(int i = 0; i<tamanio*16; i++)
                    std::cout<<"_";
                std::cout<<std::endl;
                std::cout<<"|";


                for(int h=0; h<tamanio; h++) // Imprimimos el n[umero de las casillas
                {
                    //Cambiar todo a string
                    std::cout<<std::setw(4);
                    std::cout<<l<<","<<h;
                    std::cout<<std::setw(10)<<"|";                    
                }            
                
                std::cout<<std::endl;
               
                for(int o=0; o<cosas; o++)
                {
                    for(int c=0; c<tamanio; c++)
                    {   
                        std::cout<<"|"<<std::setw(10);     
                        
                        if(casillas[l][c].objetos[o]!=NULL)
                            std::cout<<casillas[l][c].objetos[o]->getNombre();                      
                        else
                            std::cout<<"Vacio";

                        std::cout<<std::setw(5)<<"";
                    }
                    std::cout<<"|"<<std::endl;
                }
            }
            for(int i = 0; i<tamanio*16; i++)
                std::cout<<"_";        
        }
};