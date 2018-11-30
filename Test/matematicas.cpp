#include <iostream>
//#include <iomanip>
#include <cmath>
//#include <cstdlib>
using namespace std;
#include "sumat.h"

int 	enteroPotencia(int, int);
double 	hipotenusa(double, double);
bool 	multiple(int, int);
bool 	par(int);
bool 	perfecto(int);
bool 	primo(int);
int 	mcd(int, int);


int main()
{
	cout << sumat(5.4, 5.5) << endl;
}

int enteroPotencia(int x, int y)
{
	int resultado=1;
	for(int i=0; i<y; i++)
		resultado*=x;

	return resultado;
}

double hipotenusa(double a, double b)
{
	return sqrt(pow(a, 2) + pow(b, 2));
}

bool multiple(int a, int b)
{
	if(b%a == 0)
		return true;
	return false;
}

bool par(int a)
{
	if(a%2 == 0)
		return true;
	return false;
}

bool perfecto(int x)
{
	int suma=0;
	for(int j=x-1; j>0; j--)
	{
		if(x%j == 0)
		{
			suma+=j;
			if(suma>x)
				return false;
		}

	}

	if(suma == x)
		return true;
	return false;
}

bool primo(int x)
{
	for(int i=x-1; i>sqrt(x); i--)
		if(x%i == 0)
			return false;
	return true;
}



/*#include <stdio.h> 
#include <conio.h> 
void hanoi(int n,int com, int aux, int fin); 

void main(void)
{ 
	clrscr(); 
	char com='A'; 
	char aux='B'; 
	char fin='C'; 
	int n; 
	printf("\nN£mero de discos: "); 
	scanf("%d",&n); fflush(stdin); 
	printf("\n\nLos movimientos a realizar son: \n"); 
	hanoi(n,com,aux,fin); 
} 
void hanoi(int n, int com, int aux, int fin){ 
	if(n==1)
		{ 
			printf("%c->%c",com,fin); 
		} 
		else
		{ 
			hanoi(n-1,com,fin,aux); 
			printf("\n%c->%c\n",com,fin); 
			hanoi(n-1,aux,com,fin); 
		} 
	}
	*/
	int mcd(int x, int y)
	{
		if(y == 0)
			return x;
		mcd(y, x%y);
	}