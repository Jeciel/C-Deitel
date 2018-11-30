#include <iostream>
#include "Computadora.h"

using namespace std;

int Computadora::mano[];
int Computadora::pmano;
int Computadora::caralta;

Computadora::Computadora(const char *n)
{
	nombre = n;
	pmano = 0;
	caralta = 0;
	ncartas = 5;
	for(int i = 0; i < ncartas; i++) 
		mano[i] = 0;
}

const char * Computadora::getNombre()
{
	return nombre;
}

bool Computadora::pedir()
{
	for(int i=0; i<ncartas; i++)
		if(mano[i] == 99)
			return true;
	pmano = examinar();
	return false;
}

void Computadora::setCarta(int carta)
{
	for(int i=0; i<ncartas; i++)
		if(mano[i] == 99)
		{
			mano[i] = carta;
			i=5;
		}
	ordenar();
}

void Computadora::setMano(int *m)
{
	for (int i = 0; i < ncartas; ++i)
	{
		mano[i] = m[i];
	}

	ordenar();
	pmano = examinar();

	int r=0, n=0;
	
	if(pmano>4)
	{
		for (int i = 0; i < ncartas; ++i)
		{
			if( mano[i]/13 == 0 & mano[i]/13 == 1)
				r++;
			else
				n++;
		}
		if(n>r)
		{
			for (int i = 0; i < ncartas; ++i)
			{
				if( mano[i]/13 == 0 & mano[i]/13 == 1)
					mano[i] == 99;
			}
		}
		else
		{
			for (int i = 0; i < ncartas; ++i)
			{
				if( mano[i]/13 == 2 & mano[i]/13 == 3)
					mano[i] == 99;
			}
		}
	}
}

int * Computadora::getMano()
{
	return mano;
}

void Computadora::ordenar()
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

int Computadora::examinar()
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

bool Computadora::ERM()
{	
	for(int i=0; i<ncartas-1; i++)
		if ( mano[i]/13 != mano[i+1]/13 )
			 return false;
	if(mano[0]%13 != 0 || mano[1]%13 != 9 || mano[2]%13 != 10 || mano[3]%13 != 11 || mano[4]%13 != 12)
		return false;
	return true;
}

bool Computadora::ER()
{
	for(int i=0; i<ncartas-1; i++)
		if ( mano[i]/13 != mano[i+1]/13 || mano[i]%13+1 != (mano[i+1]%13))
			 return false;
	caralta = mano[4]%13;
	return true;
}

bool Computadora::poker()
{
	if(mano[0]%13 == mano[3] || mano[1]%13 == mano[4]%13)
	{
		caralta = mano[1]%13;
		return true;
	}
	return false;

}	

bool Computadora::full()
{
	if( (mano[0]%13 == mano[2]%13 & mano[3]%13 == mano[4]%13) || (mano[1]%13 == mano[3]%13 & mano[0]%13 == mano[4]%13) || (mano[2]%13 == mano[4]%13 & mano[0]%13 == mano[1]%13) )
	{
		caralta = mano[2]%13;
		return true;
	}

	return false;
}

bool Computadora::color()
{
	if(mano[0]/13 == 0)
		for(int i=0; i<ncartas-1; i++)
			if( mano[i]/13 != 0 & mano[i]/13 != 1)
				 return false;

	if(mano[0]/13 == 2)
		for(int i=0; i<ncartas-1; i++)
			if( mano[i]/13 != 2 & mano[i]/13 != 3)
				 return false;
		
	caralta = mano[4]%13;
	return true;
}

bool Computadora::escalera()
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

bool Computadora::trio()
{
	if(mano[0]%13 == mano[2]%13 || mano[1]%13 == mano[3]%13 || mano[2]%13 == mano[4]%13)
	{
		caralta = mano[2]%13;
		return true;
	}
	return false;
}

bool Computadora::pardoble()
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

bool Computadora::par()
{
	int par=0;
	for(int i=0; i<ncartas-1; i++)
		if( mano[i]%13 == mano[i+1]%13)
		{
			caralta = mano[i]%13;
			par++;
		}

	if(par==1)
	{
		return true;
	}
	return false;
}

int Computadora::getAlta()
{
	return caralta;
}

int Computadora::getpmano()
{
	return pmano;
}