#include <iostream>
#include <iomanip>
#include <cmath>
//#include <ncurses>
using namespace std;

int main()
{
	/*cout << fixed << right << 
	setprecision(1) << setw(15) << 333.546372 <<
	setprecision(2) << setw(15) << 333.546372 <<
	setprecision(3) << setw(15) << 333.546372 << endl;
	*/

	//cout << fixed << setw(10) << setprecision(2) << pow(2.5, 3) << endl;
	
	/*int x=1;
	while(x <= 20)
	{
		cout << x;
		if(x%5 != 0 )
			cout << "\t";
		else
			cout << endl;

		x++;
	}*/

	/*for(int valor=0; valor<=20; valor++)
	{
		switch(valor%2)
		{
			case 0:
					cout << valor << " Es par" << endl;
					break;
			case 1:
					cout << valor << "Es impar" << endl;
					break;
		} 
	}*/

	/*for(int i=19; i>=0; i-=2)
		cout << i<<endl;
	*/
	
	/*int i=2;
	do
	{
		cout << i;
		if(i%10 == 0)
			cout << endl;
		else
			cout << "\t";
		i+=2;
	}while(i<=100);*/

	/*int numeros = 0, suma = 0, temp;;
	
	cout << "Escriba la cantidad de numeros que desea sumar ";
	cin >> numeros;

	for(int i = 0; i<=numeros; i++)
	{
		cout << "Escriba la cantidad que desea sumar ";
		cin >> temp;

		suma += temp;
		cout << suma << endl;
	}*/

	/*int x=0;

	cout << "Escriba el factor"<<endl;
	cin >> x;

	for(int i=x-1; i>!0; i--)
	{
		x*=i;
	}
	cout << "el factor es "<< x << endl;*/
	
	//Obteniendo el valor de e
	/*int p=0;
	float x=1.0, fact=1.0;
	
	cout << "Escriba la precision " << endl;
	cin >> p;

	cout << "test p " << p << endl;
	
	for(int i = p; i != 0; i--)
	{
		fact = 1;

		for(int j = i; j >! 0; j--)
		{

			fact *= j;
		}

		cout << "Factor de " << i << "=" << fact << endl;
		x+=(1/fact);
	}

	cout << setprecision(5) << "Igual a " << x << endl;
	*/
	
	/*e'x
	int p=0; 
	float fact=1.0, x=1.0;
	float e=1.0;

	cout << "Introdusca el valos de x " << endl;
	cin >> p;

	for(int i = p; i != 0; i--)
	{
		fact = 1;
		x = 1;

		for(int j=i; j!=0; j--)
		{
			fact*=j;
			x*=p;
		}
		cout << "El factorial de" << i << "=" <<fact<<endl;
		cout << "El " << i << " de " << p << " = " << x<<endl;
		e += (x/fact);
	} 

	cout << "el valor de e=" << e << endl;*/

	//Imprimir patrones de 
	/*

	*
	**
	***
	****
	*****
	******
	*******
	********
	*********
	**********
	***********

	for(int i=0; i<=10; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	
	***********
	**********
	*********
	********
	*******
	******
	*****
	****
	***
	**
	*


	for(int i=0; i<=10; i++)
	{
		for(int j=10-i; j>0; j--)
		{
			cout << '*';
		}
		cout << endl;
	}

	**********
	 *********
	  ********
	   *******
	    ******
	     *****
	      ****
	       ***
	        **
	         *
	for(int i=0; i<=10; i++)
	{
		for(int j=i; j>0; j--)
		{
			cout << ' ';
		}
		for(int h=10-i; h>0; h--)
		{
			cout << '*';
		}
		cout << endl;
	}
	*/
/*
	for(int i=0; i<=10; i++)
	{
		for(int j=i; j>0; j--)
		{
			cout << '*';
		}
		for(int h=10-i; h>0; h--)
		{
			cout << '';
		}
		cout << endl;
	}*/

	/*for(int i=0; i<10; i++)
	{
		for(int j=9-i; j>0; j--)
		{
			cout << ' ';
		}

		for(int h=10-i; h<=10; h++)
		{
			cout << '*';
		}
		cout << endl;
	}*/
		/*
	for(int i=0; i<10; i++)
	{
		for(int j=i+1; j>0; j--)
			cout << '*';
		for(int j=9-i; j>0; j--)
			cout << ' ';
		cout << ' ';
		for(int j=10-i; j>0; j--)
			cout << '*';
		for(int j=i;  j>0; j--)
			cout << ' ';
		cout << ' ';
		for(int j=i;  j>0; j--)
			cout << ' ';
		for(int j=10-i; j>0; j--)
			cout << '*';
		cout << ' ';
		for(int j=9-i; j>0; j--)
			cout << ' ';
		for(int j=i+1; j>0; j--)
			cout << '*';
		cout << endl;
	}*/
	/*float c=0;
	int d=0, x=50;

	for(int a=1; a<x; a++)
		for(int b=1; b<x; b++)
		{
			c=sqrt(pow(a, 2) + pow(b, 2));
			d = c;
			if(c-d == 0)
				cout <<"a=" << a <<"\tb=" << b << "\tc=" <<c << endl;
		}*/
	/*

	*
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

	for(int i=1; i<=9; i++)
	{
		for(int j=0; j<sqrt(pow(i-5, 2)); j++)
			cout << " ";
		for(int j=0; j<9-sqrt(4*pow(i-5, 2)); j++)
			cout << "*";
		cout << endl;
	}*/


	return 0;

}