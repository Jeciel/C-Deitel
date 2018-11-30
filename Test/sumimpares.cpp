#include <iostream>
using namespace std;
int main ()
{
	int suma=0;
	/*for(int i=1; i<=99; i++)
	{
		if(i%2!=0)
		{
			suma+=i;
			cout << suma << endl;
		}		
	}
	*/

	for(int i=1; i<=99; i+=2)
	{
		suma+=i;
		cout << suma << endl;
	}

	return 0;
}