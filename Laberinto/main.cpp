#include <iostream>
#include <cstdlib>
 #include <stdio.h>
 #include <stdlib.h>

using namespace std;

const int T = 12;
const char PARED = '#'; 
const char VISTO = '/';
const char PASADO = 'O';
const char CERRADO = 'X';
const char VACIO = ' ';
int REN = 0;
int COL = 0;
char LABERINTO[T][T];


void imprimir(char (*)[T]);

const char extraerAr();
const char extraerAb();
const char extraerIzq();
const char extraerDer();

bool buscarAr(char);
bool buscarAb(char);
bool buscarIzq(char);
bool buscarDer(char);

void ponerAr(char);
void ponerAb(char);
void ponerIzq(char);
void ponerDer(char);

bool catalogar(int, int);

main()
{
	const char (*extraer[4])(void) = {extraerAr, extraerAb, extraerIzq, extraerDer};
	bool (*buscar[4])(char) = {buscarAr, buscarAb, buscarIzq, buscarDer};
	void (*poner[4])(const char) = {ponerAr, ponerAb, ponerIzq, ponerDer};
	srand(time(0));
	int esp[4] = {0, 0, 0, 0};
	for(int i=0; i<T; i++)
	{
		for(int j=0; j<T; j++)
		{
			if(j == 0 || i == 0 || j == T-1 || i == T-1)
				LABERINTO[i][j] = PARED;
			else
				LABERINTO[i][j] = VACIO;
		}
	}



	int ii = 0, ij = 0, fi = 0, fj = 0;

	switch(1 + rand()%4)
	{
		case 1:
				ij = 1 + rand()%(T-2);
				ii = 0;
				fi = T-1;
				fj = 1 + rand()%(T-2);
				LABERINTO[fi-1][fj] = CERRADO;
				LABERINTO[ii][ij] = CERRADO;
				ii++;
				break;
		case 2: 
				ij = T-1;
				ii = 1 + rand()%(T-2);
				fj = 0;
				fi = 1 + rand()%(T-2);
				LABERINTO[fi][fj+1] = CERRADO;
				LABERINTO[ii][ij] = CERRADO;
				ij--;
				break;
		case 3: 
				ii = T-1;
				ij = 1 + rand()%(T-2);
				fi = 0;
				fj = 1 + rand()%(T-2);
				LABERINTO[ii][ij] = CERRADO;
				LABERINTO[fi+1][fj] = CERRADO;
				ii--;
				break;
		case 4: 
				ij = 0;
				ii = 1 + rand()%(T-2);
				fj = T-1;
				fi = 1 + rand()%(T-2);
				LABERINTO[fi][fj-1] = CERRADO;
				LABERINTO[ii][ij] = CERRADO;
				ij++;
				break;
	}

	LABERINTO[ii][ij] = PASADO;
	LABERINTO[fi][fj] = CERRADO;
	
	int h=0, nodoV=1, nP=0, nodoP = 1;
	bool regreso = false;
	REN = ii;
	COL = ij;
	
	while( nodoP != 0 )//Mientras haya un camino 
	{
		//Inicializamos variables 
		h=0; 
		nodoV=0;
		nodoP = 1;

		for(int f=0; f<4; f++)//inicializamos el vector de espacios 
			esp[f] = 0;

		for(int i=0; i<4; i++)//Examinamo los 4 cuadrantes 
		{
			if(!regreso) //Si no estamos regresando 
			{
				switch((*extraer[i])())
				{
					case VISTO: // si el cuadrante es "/" se cambia a "#"
								(*poner[i])(PARED);
								break;
					case VACIO: //Si el cuadrante es " " se cambia a "/"
								(*poner[i])(VISTO);
								nodoV++; //se aumenta el contador de nodos vacios

								h=0;
								
								while(esp[h] != 0 & h<4) //buscamos un lugar en el vector de espacios vacios para agragar el nuevo espacio 
									h++;

								if(esp[h] == 0) //verificamos que el espacio esté ralmente vacio y agregamos el espacio vacio al vector.
									esp[h] = i+1;
								break;

				}
			}
			else
			{
				switch((*extraer[i])())
				{
					case VISTO: // si el cuadrante es "/" se cambia a "#"
							nodoV++; //se aumenta el contador de nodos vacios

							h=0;
								
							while(esp[h] != 0 & h<4) //buscamos un lugar en el vector de espacios vacios para agragar el nuevo espacio 
								h++;
	
							if(esp[h] == 0) //verificamos que el espacio esté ralmente vacio y agregamos el espacio vacio al vector.
								esp[h] = i+1;
		
							break;
					case VACIO: //Si el cuadrante es " " se cambia a "/"
							(*poner[i])(VISTO);
							nodoV++; //se aumenta el contador de nodos vacios
							
							h=0;
				
							while(esp[h] != 0 & h<4) //buscamos un lugar en el vector de espacios vacios para agragar el nuevo espacio 
								h++;

							if(esp[h] == 0) //verificamos que el espacio esté ralmente vacio y agregamos el espacio vacio al vector.
								esp[h] = i+1;
							break;
				}
			}
		}

		if(nodoV != 0) //si hay espacios vacios 
		{
			regreso = false;
			switch(esp[rand()%nodoV]) // colocar un "O" en cualquier cuadrante vacio 
			{
				case 1://Arriba
						REN--;
						LABERINTO[REN][COL] = PASADO;
						break;
				case 2://Abajo
						REN++;
						LABERINTO[REN][COL] = PASADO;
						break;
				case 3://Izquierda
						COL--;
						LABERINTO[REN][COL] = PASADO;
						break;
				case 4://Derecha
						COL++;
						LABERINTO[REN][COL] = PASADO;
						break;
			}
		}
		else // no hay nodos vacios.
		{
			LABERINTO[REN][COL] = CERRADO;	//Ponemos el nodo actual como CERRADO
			regreso = true; //Activamo el regreso 

			//Buscar un nodo "O"

			//Inicializamos variables 
			h=0; 
			nodoP=0;

			for(int f=0; f<4; f++)//Inicializamos el vector de espacios 
				esp[f] = 0;

			for(int i=0; i<4; i++)//Examinamo los 4 cuadrantes 
			{
				if( (*extraer[i])() ==  PASADO) //Si el cuadrante es un nodo  'O'
				{
					nodoP++;
					h=0;
								
					while(esp[h] != 0 & h<4) //buscamos un lugar en el vector de espacios vacios para agragar el nuevo PASADO
						h++;

					if(esp[h] == 0) //verificamos que el espacio esté ralmente libre y agregamos el PASADO
						esp[h] = i+1;			
				}	
			}

			if(nodoP != 0)//si hay camino de vuelta 
			{
				switch(esp[rand()%nodoP]) //nos movemos al azar
				{
					case 1://Arriba
							REN--;
							break;
					case 2://Abajo
							REN++;
							break;
					case 3://Izquierda
							COL--;
							break;
					case 4://Derecha
							COL++;
							break;
				}
			}
		}//Fin else 
	}
	LABERINTO[REN][COL] = CERRADO;	
	imprimir(LABERINTO);
}

bool catalogar(int ti, int tj)
{
	if(LABERINTO[ti][tj] == VISTO)
		LABERINTO[ti][tj] = PARED;
	if(LABERINTO[ti][tj] == VACIO)
	{
		LABERINTO[ti][tj] = VISTO;
		return true;
	}
	return false;
}

void ponerAr(const char caracter)
{
	LABERINTO[REN-1][COL] = caracter;
}

void ponerAb(const char caracter)
{
	LABERINTO[REN+1][COL] = caracter;
}

void ponerIzq(const char caracter)
{
	LABERINTO[REN][COL-1] = caracter;
}

void ponerDer(const char caracter)
{
	LABERINTO[REN][COL+1] = caracter;
}

bool buscarAr(char caracter)
{
	//cout << "buscarAr" << endl;
	if(LABERINTO[REN-1][COL] == caracter)
		return true;
	return false;
}

bool buscarAb(char caracter)
{
	//cout << "buscarAb" << endl;
	if(LABERINTO[REN+1][COL] == caracter)
		return true;
	return false;
}

bool buscarIzq(char caracter)
{
	//cout << "buscarIzq" << endl;
	if(LABERINTO[REN][COL-1] == caracter)
		return true;
	return false;
}

bool buscarDer(char caracter)
{
	//cout << "buscarDer" << endl;
	if(LABERINTO[REN][COL+1] == caracter)
		return true;
	return false;
}

const char extraerAr()
{
	return LABERINTO[REN-1][COL];
}

const char extraerAb()
{
	return LABERINTO[REN+1][COL];
}

const char extraerIzq()
{	
	return LABERINTO[REN][COL-1];
}

const char extraerDer()
{
	return LABERINTO[REN][COL+1];
}

void imprimir(char (*matriz)[T])
{
	for(int i=0; i<T; i++)
	{
		for(int j=0; j<T; j++)
		{
			cout << matriz[i][j];
		}
		cout << endl;
	}
}



