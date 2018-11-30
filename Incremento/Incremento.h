#ifndef INCREMENTO_H
#define INCREMENTO_H

class Incremento{
    public:
        Incremento(int c = 0, int i =1);

        void agregarIncremento(){
            cuenta += incremento;
        }

        void imprimir()const;
    private:
        int cuenta;
        const int incremento;
};

#endif