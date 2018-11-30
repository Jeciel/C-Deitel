#include "Rectangulo.h"
#include "Coordenada.h"
#include "VectorR2.h"
#include <iostream>

int main()
{
    /*Rectangulo r();
    std::cout<< "c1: "<<r.getC1().getX()<<","<<r.getC1().getX()<<std::endl;
*/

    VectorR2 A(2, 1);
    VectorR2 B(2, 2);
    VectorR2 C(1, 1);
    VectorR2 D(1, 2);

    VectorR2 AC = A.resta(C);
    VectorR2 AB = A.resta(B);
    VectorR2 AD = A.resta(D);
    VectorR2 BC = B.resta(C);
    VectorR2 BD = B.resta(D);
    VectorR2 CD = C.resta(D);

    std::cout << "AC ";
    AC.imprimir();
    std::cout << std::endl;
    std::cout << "AB ";
    AB.imprimir();
    std::cout << std::endl;
    std::cout << "AD ";
    AD.imprimir();
    std::cout << std::endl;
    std::cout << "BC ";
    BC.imprimir();
    std::cout << std::endl;
    std::cout << "BD ";
    BD.imprimir();
    std::cout << std::endl;
    std::cout << "CD ";
    CD.imprimir();
    std::cout << std::endl;

    std::cout << "AC " << AC.norm() << std::endl;
    std::cout << "AB " << AB.norm() << std::endl;
    std::cout << "AD " << AD.norm() << std::endl;
    std::cout << "BC " << BC.norm() << std::endl;
    std::cout << "BD " << BD.norm() << std::endl;
    std::cout << "CD " << CD.norm() << std::endl;

    /*Rectangulo r(1.3, 3.6);

    std::cout<< "Area: "<<r.area()<<std::endl<<"Perimetro: "<<r.perimetro()<<std::endl;*/
    std::cout << std::endl;
    return 0;
}