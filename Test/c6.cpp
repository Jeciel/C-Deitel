#include <iostream>
#include <iomanip> //libreria de modificadores de flujo de salida 
#include <cstdlib> //Prototipo de la funcion Rand
using namespace std;


int main()
{
	enum Estados{ GANAR, PERDER };
	Estados a=GANAR;
	cout << a;
}
/*int main()
{
	int D1, D2, D3, D4, d1, d2, d3, d4;
	bool dn1=false, dn2=false, dn3=false, dn4=false;

	char x;
	unsigned tiempo = time(0), opcion;
	cout << "comenzar " << endl;

	srand(tiempo);

	D1 = (1+ rand()%6);
	D2 = (1+ rand()%6);
	D3 = (1+ rand()%6);
	D4 = (1+ rand()%6);
	
	d1 = (1+ rand()%6);
	d2 = (1+ rand()%6);
	d3 = (1+ rand()%6);
	d4 = (1+ rand()%6);


	cout <<"Tus dados " << endl;
	cout << setw(10) << d1 << setw(10) << d2 << setw(10)<< d3 << setw(10) << d4 << endl;

	cout << "Los dados de tu oponente" << endl;
	cout << setw(10) << D1 << setw(10) << D2 << setw(10)<< D3 << setw(10) << D4 << endl;
	
	do
	{	
		cout << "Ociones" << endl << "1-cambiar " << "0.-Salir" <<endl;
		cin >> opcion;

		switch(opcion)
		{
			case 1:
					cout << "cual dado quiere cambiar?" << endl;
					cin >> opcion;

					switch(opcion)
					{
						case 1:
								if(!dn1)
									d1=(1+ rand()%6);
								dn1=true;
								break;
						case 2:
								if(!dn2)
									d2=(1+ rand()%6);
								dn2=true;
								break;
						case 3:
								if(!dn3)
									d3=(1+ rand()%6);
								break;
						case 4:
								if(!dn4)
									d4=(1+ rand()%6);
								break;
					}
					break;
			default:
					cout << "Intente de nuevo" << endl;
					break;
		}
	}while(opcion != 0);

	cout << "Tus nuevos dados son" << endl;
	cout << setw(10) << d1 << setw(10) << d2 << setw(10)<< d3 << setw(10) << d4 << endl;


}*/

