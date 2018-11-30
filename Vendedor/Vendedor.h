#ifndef VENDEDOR_H
#define VENDEDOR_H

class Vendedor{
    public:
        Vendedor();
        void ObtenerVentasDelUsuario();
        void establecerVentas(int, double);
        void imprimirVentasAnuales();
    private:
        double totalVentasAnuales();
        double ventas[12];
};

#endif