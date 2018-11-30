#include <iostream>
using namespace std;

int cuadradoV(int);
void cuadradoR(int &);

int main()
{
	int x=4;
	int &z=x;

	cout << "x= " << x << "antes de la funcion\n";
	cout << "Valor devuelto oir cuadrado" << cuadradoV(x) << endl;

	cout << "z= " << z << "antes de la funcion\n";
	cuadradoR(z);
	cout << "Valor devuelto oir cuadrado" << z << endl;
}

int cuadradoV(int a)
{
	return a*a;
}

void cuadradoR(int &ref)
{
	ref*=ref;
}