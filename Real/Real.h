#ifndef REAL_H
#define REAL_H

class Real{
    private:
        int numerador;
        int denominador;
        void reducir();
        void setNumerador(int=0);
        void setDenominador(int=1);

    public:
        Real(int =1, int =1);
        int getNumerador();
        int getDenominador();
        void setReal(int = 0, int =1);
        void imprimir();
        Real suma(Real, Real);
        Real resta(Real, Real);
        Real multiplicacion(Real, Real);
        Real divicion(Real, Real);

};

#endif