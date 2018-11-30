#ifndef COMISION_H
#define COMISION_H

#include <string>

class EmpleadoPorComision{
    public:
        EmpleadoPorComision(const std::string &, const std::string &, const std::string &, double =0.0, double = 0.0);
        
        void setPrimerNombre(const std::string);
        std::string getPrimerNombre() const;
        
        void setApellidoPaterno(const std::string &);
        std::string getApellidoPaterno() const;
        
        void  setNumeroSeguroSocial(const std::string &);
        std::string getNumeroSeguroSocial()const;

        void setVentasBrutas(double);
        double getVentasBrutas() const;


        void setTarifaComision(double);
        double getTarifaComision() const;


        double ingresos();
        void imprimir();
    private:
        std::string primerNombre;
        std::string apellidoPaterno;
        std::string numeroSeguroSocial;
        double ventasBrutas;
        double tarifaComision;
};

#endif