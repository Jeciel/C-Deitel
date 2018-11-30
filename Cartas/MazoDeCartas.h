#ifndef MAZODECARTAS_H
#define MAZODECARTAS_H

class MazoDeCartas{
    public:
        MazoDeCartas();
        void barajar(int *);
        void imprimir(int *);
        int* getMazo();
        int getCarta();
        void repartir(int*, int);
        void mostrar(int *, int );
        void mostrar(int);
        void ordenar(int*, int);
        int calcular(int*, int);
        void cambio(int*);
        void repartidor(int*, int);
        
        static const int palos = 4;
        static const int caras = 13;
        static const int numCartasMazo = palos*caras;

    private:
        int top; 
        int mazo[numCartasMazo];
        bool pares(int*, int);
        bool tercia(int*, int);
        bool escalera(int*, int);
        bool cuarta(int*, int);
        bool flush(int*, int);
        bool doble(int*, int);
        int getPalo(int)const;
        int getNumero(int)const;
};

#endif