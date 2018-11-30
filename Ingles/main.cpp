/* ncurses 
 * Menu contruir, sub menu Estabecer comandos de contrucci[on
 * cambiar compilar g++ -Wall -c "%f"  por   g++ -Wall -c -lm "%f" 
 * g++ -Wall -o "%e" "%f" -lncurses.
 */
 
#include <iostream>
#include <stdio.h>
#include "sonido.cpp"
#include <ncurses.h>
using namespace std;

int main()
{
	int tecla=0;
	sonido programa;
	initscr();
	while(tecla != 48)
	{	
		erase();
		printw("Menú\n1-Aprender\n2-Practicar\n0-Salir\n");	
		refresh();
		
		tecla = getch(); 
		switch(tecla)
		{
			case 49:
				programa.Aprender();
				tecla=14;
				break;
		}
		
	}
	endwin();
	
	return 0;
}
