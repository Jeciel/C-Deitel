#include <iostream>

class Cuenta
{
  public:
    void setX(int valor)
    {
        x = valor;
    }

    void imprimir()
    {
        std::cout << x << std::endl;
    }

  private:
    int x;
};

int main()
{
    Cuenta contador;
    Cuenta *contadorPtr = &contador;
    Cuenta &contadorRef = contador;

    std::cout << "Establecer x en 1 e imprimir usando el nombre del objeto";
    contador.setX(1);
    contador.imprimir();

    std::cout << "Establecer x en 2 e imprimir usando referencia a objeto";
    contadorRef.setX(2);
    contador.imprimir();

    std::cout << "Establecer x en 1 e imprimir usando el nombre del objeto";
    contador.setX(1);
    contador.imprimir();

    std::cout<<contadorPtr<<std::endl;
    std::cout<<&contadorRef<<std::endl;

    return 0;
}