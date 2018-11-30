#include <iostream>
using namespace std;

const int valor[8][8]= {	2, 3, 4, 4, 4, 4, 3, 2, 
							3, 4, 6, 6, 6, 6, 4, 3, 	
							4, 6, 8, 8, 8, 8, 6, 4, 
							4, 6, 8, 8, 8, 8, 6, 4, 
							4, 6, 8, 8, 8, 8, 6, 4,
							4, 6, 8, 8, 8, 8, 6, 4, 
							3, 4, 6, 6, 6, 6, 4, 3, 
							2, 3, 4, 4, 4, 4, 3, 2 };
const int tamtablero = 8 ;
const int tlista = 64;

class Caballo
{

private:
	int ren[tlista], col[tlista], c;
	char tablero[tamtablero][tamtablero];

public:
	Caballo(int a, int b)
	{
		c=0;
		ren[0]=a;
		col[0]=b;
		vaciarTablero();
		tablero[a][b]='C';
		ren[1]=tamtablero; 
		col[1]=tamtablero;
	}

	void vaciarTablero()
	{
		for(int i=0; i<tamtablero; i++)
			for(int j=0; j<tamtablero; j++)
				tablero[i][j]=' ';
	}

	int heuristica(x, y)
	{
		int m[7][2] = {};
		bool terminar = false;
		if(ren[c]+2<=7 & col[c]-1>=0 & !buscar(ren[c]+2, col[c]-1) & val[ren[c]+2][col[c]-1] <= m[0][1])
		{
			if(val[ren[c]+2][col[c]-1] == m[0][1])
			{
				int h=0;
				while(terminar == false & i<8)
				{
					if(m[i][i] == 0)
					{
						
					}
				}
			}else if(val[ren[c]+2][col[c]-1] < m[0][1])
			{
				//vaciar y cambiar. 
			}
		}
	} 

	void mover(int mov)
	{
		switch(mov)
		{
			case 1:
					
					tablero[ren[c]][col[c]]='X';
					ren[c+1] = ren[c]+2;
					col[c+1] = col[c]-1;
					tablero[ren[c+1]][col[c+1]]='C';
					c++;
					ren[c+1] = 8;
					col[c+1] = 8;
					break;
			case 2:
					if(ren[c]+2<=7 & col[c]+1<=7 & !buscar(ren[c]+2, col[c]+1) )
					{
						tablero[ren[c]][col[c]]='X';
						ren[c+1] = ren[c]+2;
						col[c+1] = col[c]+1;
						tablero[ren[c+1]][col[c+1]]='C';
						c++;
						ren[c+1] = 8;
						col[c+1] = 8;
					}
					break;
			case 3:
					if(ren[c]+1<=7 & col[c]+2<=7 & !buscar(ren[c]+1, col[c]+2) )
					{
						tablero[ren[c]][col[c]]='X';
						ren[c+1] = ren[c]+1;
						col[c+1] = col[c]+2;
						tablero[ren[c+1]][col[c+1]]='C';
						c++;
						ren[c+1] = 8;
						col[c+1] = 8;
					}
					break;
			case 4:
					if(ren[c]-1>=0 & col[c]+2<=7 & !buscar(ren[c]-1, col[c]+2) )
					{
						tablero[ren[c]][col[c]]='X';
						ren[c+1] = ren[c]-1;
						col[c+1] = col[c]+2;
						tablero[ren[c+1]][col[c+1]]='C';
						c++;
						ren[c+1] = 8;
						col[c+1] = 8;
					}
					break;
			case 5:
					if(ren[c]-1>=0 & col[c]-2>=0 & !buscar(ren[c]-1, col[c]-2) )
					{
						tablero[ren[c]][col[c]]='X';
						ren[c+1] = ren[c]-1;
						col[c+1] = col[c]-2;
						tablero[ren[c+1]][col[c+1]]='C';
						c++;
						ren[c+1] = 8;
						col[c+1] = 8;
					}
					break;
			case 6:
					if(ren[c]+1<=7 & col[c]-2>=0 & !buscar(ren[c]+1, col[c]-2) )
					{
						tablero[ren[c]][col[c]]='X';
						ren[c+1] = ren[c]+1;
						col[c+1] = col[c]-2;
						tablero[ren[c+1]][col[c+1]]='C';
						c++;
						ren[c+1] = 8;
						col[c+1] = 8;
					}
					break;
			case 7:
					if(ren[c]-2>=0 & col[c]-1>=0 & !buscar(ren[c]-2, col[c]-1) )
					{
						tablero[ren[c]][col[c]]='X';
						ren[c+1] = ren[c]-2;
						col[c+1] = col[c]-1;
						tablero[ren[c+1]][col[c+1]]='C';
						c++;
						ren[c+1] = 8;
						col[c+1] = 8;
					}
					break;
			case 8:
					if(ren[c]-2>=0 & col[c]+1<=7 & !buscar(ren[c]-2, col[c]+1) )
					{
						tablero[ren[c]][col[c]]='X';
						ren[c+1] = ren[c]-2;
						col[c+1] = col[c]+1;
						tablero[ren[c+1]][col[c+1]]='C';
						c++;
						ren[c+1] = 8;
						col[c+1] = 8;
					}
					break;

			case 9:
					imprimir();
					break;
		}
	}

	void imprimir()
	{
		int i=0;
		while(ren[i]!=8)
		{
			cout << ren[i] << "\t" << col[i] << endl;
			i++;
		}	
	}

	void imrpimirTablero()
	{
		for(int i=0; i<tamtablero; i++)
		{
			for(int j=0; j<tamtablero; j++)
			{
				cout << tablero[i][j]<< "\t";
			}
			cout << endl;
		}
	} 

	void imrpimirValor()
	{
		for(int i=0; i<tamtablero; i++)
		{
			for(int j=0; j<tamtablero; j++)
			{
				cout << valor[i][j]<< "\t";
			}
			cout << endl;
		}
	} 

	bool buscar(int a, int b)
	{
		bool encontrado=false;
		int i=0;
		while(ren[i]!=8 & !encontrado)
		{
			if(ren[i]==a & col[i]==b)
				encontrado = true;
			i++;
		}

		return encontrado;
	}
};