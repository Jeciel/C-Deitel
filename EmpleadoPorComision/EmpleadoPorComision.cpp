#include <iostream>
#include "EmpleadoPorComision.h"

EmpleadoPorComision::EmpleadoPorComision(const std::string & a, const std::string & b, const std::string & c, double d=0.0 , double e= 0.0){
    primerNombre=a;
    apellidoPaterno=b;
    numeroSeguroSocial=c;
    ventasBrutas=d;
    tarifaComision=e;
}
        
void EmpleadoPorComision::setPrimerNombre(const std::string p){
    primerNombre = p;
}
std::string EmpleadoPorComision::getPrimerNombre() const{
    return primerNombre;
};

void EmpleadoPorComision::setApellidoPaterno(const std::string & p){
    apellidoPaterno = p;
}

std::string EmpleadoPorComision::getApellidoPaterno() const{
    return apellidoPaterno;
}

void  EmpleadoPorComision::setNumeroSeguroSocial(const std::string & p){
    numeroSeguroSocial = p;
}

std::string EmpleadoPorComision::getNumeroSeguroSocial() const{
    return numeroSeguroSocial;
}

void EmpleadoPorComision::setVentasBrutas(double p){
    ventasBrutas = p;
}

double EmpleadoPorComision::getVentasBrutas() const{
    return ventasBrutas;
}


void EmpleadoPorComision::setTarifaComision(double p){ 
    tarifaComision = p;
}

double EmpleadoPorComision::getTarifaComision() const{
    return tarifaComision;
}


double EmpleadoPorComision::ingresos(){
    return tarifaComision * ventasBrutas;
}
void EmpleadoPorComision::imprimir(){
    std::cout<< "empleado por comision: " << primerNombre << ' ' << apellidoPaterno <<
    '/nNumero de Seguridad Social: '<< numeroSeguroSocial <<
    '/nVentas Brutas: '<< ventasBrutas<<
    '/nTarifa de Comisi[on: '<< tarifaComision;
}