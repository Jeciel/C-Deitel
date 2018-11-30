#include <iostream>
#include "Jugador.h"

using namespace std;

int Jugador::mano[];
int Jugador::pmano;
int Jugador::caralta;

Jugador::Jugador(const char *n)
{
	nombre = n;
	pmano = 0;
	caralta = 0;
	ncartas = 5;
	for(int i = 0; i < ncartas; i++) 
		mano[i] = 0;
}

const char * Jugador::getNombre()
{
	return nombre;
}

void Jugador::borrar(int carta)
{
	mano[carta] = 99;
}

bool Jugador::pedir()
{
	for(int i=0; i<ncartas; i++)
		if(mano[i] == 99)
			return true;
	pmano = examinar();
	return false;
}

void Jugador::setCarta(int carta)
{
	for(int i=0; i<ncartas; i++)
		if(mano[i] == 99)
		{
			mano[i] = carta;
			i=5;
		}
	ordenar();
}

void Jugador::setMano(int *m)
{
	for (int i = 0; i < ncartas; ++i)
	{
		mano[i] = m[i];
	}

	ordenar();
	pmano = examinar();
}

int * Jugador::getMano()
{
	return mano;
}

void Jugador::ordenar()
{
	bool mov = false;
	int tm = ncartas-1;
	int temp;

	for(int i=0; i<ncartas&&!mov; i++)
	{
		for(int j=0; j<tm; j++)
		{
			if(mano[j]%13 > mano[j+1]%13)
			{
				temp = mano[j];
				mano[j] = mano[j+1];
				mano[j+1] = temp;
			}
		}
		tm--;
	}
}

int Jugador::examinar()
{
	if(ERM())
		return 0;
	if(ER())
		return 1;
	if(poker())
		return 2;
	if(full())
		return 3;
	if(color())
		return 4;
	if(escalera())
		return 5;
	if(trio())
		return 6;
	if(pardoble())
		return 7;
	if(par())
		return 8;
	caralta = mano[4]%13;
	return 9;
}

bool Jugador::ERM()
{	
	for(int i=0; i<ncartas-1; i++)
		if ( mano[i]/13 != mano[i+1]/13 )
			 return false;
	if(mano[0]%13 != 0 || mano[1]%13 != 9 || mano[2]%13 != 10 || mano[3]%13 != 11 || mano[4]%13 != 12)
		return false;
	return true;
}

bool Jugador::ER()
{
	for(int i=0; i<ncartas-1; i++)
		if ( mano[i]/13 != mano[i+1]/13 || mano[i]%13+1 != (mano[i+1]%13))
			 return false;
	caralta = mano[4]%13;
	return true;
}

bool Jugador::poker()
{
	if(mano[0]%13 == mano[3] || mano[1]%13 == mano[4]%13)
	{
		caralta = mano[1]%13;
		return true;
	}
	return false;

}	

bool Jugador::full()
{
	if( (mano[0]%13 == mano[2]%13 & mano[3]%13 == mano[4]%13) || (mano[1]%13 == mano[3]%13 & mano[0]%13 == mano[4]%13) || (mano[2]%13 == mano[4]%13 & mano[0]%13 == mano[1]%13) )
	{
		caralta = mano[2]%13;
		return true;
	}

	return false;
}

bool Jugador::color()
{
	if(mano[0]/13 == 0)
		for(int i=0; i<ncartas-1; i++)
			if( mano[i]/13 != 0 &  mano[i]/13 != 1)
				 return false;

	if(mano[0]/13 == 2)
		for(int i=0; i<ncartas-1; i++)
			if( mano[i]/13 != 2 &  mano[i]/13 != 2)
				 return false;
		
	caralta = mano[4]%13;
	return true;
}

bool Jugador::escalera()
{
	if(mano[0]%13 == 0 & mano[1]%13 == 9 & mano[2]%13 == 10 & mano[3]%13 == 11 & mano[4]%13 == 12)
	{
		caralta = mano[0]%13;
		return true;
	}
	for(int i=0; i<ncartas-1; i++)
		if (mano[i]%13+1 != mano[i+1]%13)
			 return false;
	caralta =  mano[4]%13;
	return true;
}

bool Jugador::trio()
{
	if(mano[0]%13 == mano[2]%13 || mano[1]%13 == mano[3]%13 || mano[2]%13 == mano[4]%13)
	{
		caralta = mano[2]%13;
		return true;
	}
	return false;
}

bool Jugador::pardoble()
{
	int par=0;
	for(int i=0; i<ncartas-1; i++)
		if( mano[i]%13 == mano[i+1]%13)
		{
			if(caralta < mano[i]%13)
				caralta =  mano[i]%13;
			par++;
		}

	if(par == 2)
		return true;
	return false;
}

bool Jugador::par()
{
	int par=0;
	for(int i=0; i<ncartas-1; i++)
		if( mano[i]%13 == mano[i+1]%13)
		{
			caralta = mano[i]%13;
			par++;
		}

	if(par==1)
		return true;
	return false;
}

int Jugador::getAlta()
{
	return caralta;
}

int Jugador::getpmano()
{
	return pmano;
}