#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <string>
#include "sonido.h"

using namespace std;

sonido::sonido()
{
	//nada
}
void sonido::Aprender()
{
	while(tecla!=48)
	{
		erase();
		printw("APRENDER\nMenú\n1-Módulos\n2-Específico\n0-Salir\n");
		refresh();
		
		tecla = getch();
		switch(tecla)
		{
			case 49: //1
				Modulos();
				tecla=14;
				break;				
		}
	}
}

void sonido::Modulos()
{			
	while(tecla!=48)
	{
		erase();
		printw("Modulos\na-be-bring\nb-broadcast-cut\nc-deal-feel\nd-figth-give\ne-go-kept\nf-kneel-lose\ng-make-run\nh-say-shoot\n9-show-spend\n10-split-strike\n11swear-throw\n12-undertand-write");
		refresh();
		
		tecla = getch();
		switch(tecla)
		{
			case 97:	//a		be-bring
					erase();
					//system(cadena3);
					//system("canberra-gtk-play -f verbos/beat.wav");
					
					refresh();
					getch();
					break;
			case 98:	//b		broadcast-cut
					break;
			case 99:	//c		deal feel
					break;
			case 100:	//d		figth-give
					break;
			case 101:	//e		go-keep
					break;
			case 102:	//f		kneel-lose
					break;
			case 103:	//g		make-run
					break;
			case 104:	//h		say-shoot
					break;
			case 105:	//i		show-spend
					break;
			case 106:	//j		spit-strike
					break;
			case 107:	//k		swear-throw
					break;
			case 108:	//l		understand-write
					break;

		}
	}
}//fin modulos
