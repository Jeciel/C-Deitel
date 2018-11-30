#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
    public: 
        Matriz();
        Matriz(int);
        int getConstante();
        int getDim();
        ~Matriz();

        Matriz operator+(Matriz &obj){
            Matriz res =  Matriz(this->dim + obj.getDim());
            return res; 
        }

        
    private:
        int dim;
        const int constante;    
    friend void amiga(Matriz &obj);   
   
};
#endif