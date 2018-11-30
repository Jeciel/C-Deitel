#include <iostream>
#include <cstdlib>
#include "Jugador.h"
#include "Computadora.h"

using namespace std;

void barajar();
void repartir(Jugador);
void repartir(Computadora);
void mostrar(int *);
int darCarta();

const int TBARAJA = 52;
const int TMANO = 5;
const char *RANKING[] = {"Escalera Real Maxima", "Escalera Real", "Poker", "Full", "Color", "Escalera", "Trio", "Doble Pareja", "Par", "Carta Mas Alta"};
const char *PALOS[] = {"Treboles", "Picas", "Diamantes", "Corazones"};
const char *NUMEROS[] = {"As", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez", "Joto", "Quina", "Rey"};

int START = 0;
unsigned int BARAJA[TBARAJA]; 

int main()
{
	START = 0;
	int opcion = 0, carta = 0, cambios[5]={0};
	const char *jugadores[]={"Jeciel", "Adriana"};
	Jugador Jeciel(jugadores[0]);
	Computadora Adriana(jugadores[1]);

	for(int i=0; i<TBARAJA; i++)
		BARAJA[i]=i;
	
	barajar();
	barajar();
	barajar();
	barajar();

	repartir(Jeciel);
	repartir(Adriana);

	system("clear");
	cout << "Tu mano es " << endl << endl;
	mostrar(Jeciel.getMano());
	//cout << Jeciel.getAlta() << endl;
	cout << "Tienes " <<RANKING[Jeciel.getpmano()] << endl;
	cout << "Adriana tiene " <<RANKING[Adriana.getpmano()] << endl;

	while(opcion != 2)
	{
		cout << endl << "Quieres cambiar alguna carta?" << endl;
		cout << "1. Si, Dame una" << endl;
		cout << "2. Me quedo" << endl;

		cin >> opcion;

		if(opcion == 1)
		{
			cout << "Cual carta quieres cambiar?" << endl;
			cin >> carta;

			if(carta >= 0 & carta < 5)
			{
				Jeciel.borrar(carta);
			}
		}
	}

	while(Jeciel.pedir())
		Jeciel.setCarta(darCarta());

	while(Adriana.pedir())
		Adriana.setCarta(darCarta());

	//system("clear");
	cout << "Tu mano es " << endl << endl;
	mostrar(Jeciel.getMano());
	cout << "Tienes " <<RANKING[Jeciel.getpmano()] << endl;
	cout << "Adriana tiene " <<RANKING[Adriana.getpmano()] << endl;

	//cout << RANKING[examinar(mano1)] << endl;
	//cout << RANKING[examinar(mano2)] << endl;

	return 0;
}

int darCarta()
{
	int carta = BARAJA[START];
	cout << carta << endl;
	START++;
	return carta;
}

void mostrar(int *mano)
{
	for(int i=0; i<TMANO; i++)
	{
		cout << i <<"- "<< NUMEROS[mano[i]%13]  << " de " << PALOS[mano[i]/13] << endl;
	}
	cout << endl;
}

void repartir(Jugador jugadorx)
{
	int mano[TMANO];

	for(int i=0; i<TMANO; i++)
	{
		mano[i] = darCarta();
	}
	jugadorx.setMano(mano);
}

void repartir(Computadora jugadorx)
{
	int mano[TMANO];

	for(int i=0; i<TMANO; i++)
	{
		mano[i] = darCarta();
	}
	jugadorx.setMano(mano);
}
void barajar()
{
	srand(time(0));
	unsigned int temp, temp2;
	
	for(int i=START; i<TBARAJA; i++)
	{
		temp = BARAJA[i];
		temp2 = rand()% TBARAJA;
		BARAJA[i] = BARAJA[temp2];
		BARAJA[temp2] = temp;
	}
}