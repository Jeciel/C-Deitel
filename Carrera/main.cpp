#include <iostream>
#include <cstdlib>
using namespace std;

main()
{
	int tortuga = 1, liebre = 1, rt=0, rl=0;
	srand(time(0));

	cout << "PUM !!! \nY ARRANCAN !!!" << endl;

	for(int i=1; i<=70; i++)
		cout << "_" ;
	cout << endl;

	while(liebre < 70 & tortuga < 70 & liebre != 70 & tortuga != 70)
	{
		rt = 1 + rand()%100;
		rl = 1 + rand()%100;

		if(rt <= 50)
			tortuga += 7;
		if(rt > 50 && rt <= 70)
			if(tortuga <= 6)
				tortuga = 1;
			else
				tortuga -= 6;
		if(rt > 70 && rt <= 100)
			tortuga ++;

		if(rl <= 20)//Gan salto
			liebre += 9;
		if(rl >20 && rl <= 30) // Gran resbalon -12
			if(liebre <= 12)
				liebre = 1;
			else
				liebre -= 12;
		if(rl > 30 && rl <= 60) //peque;o salto
			liebre++;
		if(rl > 60 && rl <= 80 ) //Pequeno resbalon
			if(liebre <= 2)
				liebre = 1;
			else
				liebre -= 2;



		for(int i=0; i<=70; i++)
		{
			if(tortuga == liebre && tortuga == i)
				cout << "X";
			else
			{
				if(tortuga == i)
					cout << "T";
				if(liebre ==  i)
					cout << "L";
				if(i != tortuga && i != liebre)
					cout << " ";
			}
		}
		cout << "META";
		if(tortuga >= 70 && liebre >= 70)
			cout <<"\nEmpate" << endl;
		else
		{
		if(tortuga >= 70)
			cout <<"\nLa tortuga Gan[o" << endl;
		if(liebre >= 70)
			cout <<"\nLa liebre Gan[o" << endl;
		}
		cout << endl;
		//cin.get();
	}
}