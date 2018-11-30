#include <iostream>
#include <cstdlib>

using namespace std;
void burbuja(int [], int);

int main()
{
	srand(time(0));
	const int tamanio = 10;
	int t[tamanio] = {1+rand()%100, 1+rand()%100, 1+rand()%100, 1+rand()%100, 1+rand()%100, 1+rand()%100, 1+rand()%100, 1+rand()%100, 1+rand()%100, 1+rand()%100 };
	
	for(int i=0; i<tamanio; i++)
		cout << t[i] << "\t";
	cout << endl;
	
	burbuja(t, tamanio);

	for(int i=0; i<tamanio; i++)
		cout << t[i] << "\t";
	cout << endl;
	
}

void burbuja(int a[], int tam)
{
	bool fin = false;
	int temp=0;
	int tam2=tam-1;
	
	while(!fin)
	{
		fin = true;
		for(int i=0; i<tam2; i++)
			if( a[i] > a[i+1])
			{
				temp = a[i+1];
				a[i+1] = a[i];
				a[i] = temp;
				fin = false;
			}
		tam2--;
	}
}