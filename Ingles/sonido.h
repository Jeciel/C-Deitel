#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <string>

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

class sonido
{
	public:
		sonido();
		void Aprender();
	private:
		char tecla;
		void Modulos();
};

#endif
