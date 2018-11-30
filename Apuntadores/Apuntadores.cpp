#include <iostream>

using std::cout;
using std::endl;

int cubo(int);
int cubo2(int *);
void convertirMayusculas(char *);
void convertirMayusculas2(char *);
void imprimir(const char *);

int main()
{
    int *aPtr;
    char palabra[] = {'H', 'o', 'l', 'a', '\0'};

    convertirMayusculas(palabra);
    cout << palabra << endl;
    /*
    convertirMayusculas2(palabra);
    cout<<palabra<<endl;
    */
    imprimir(palabra);
    cout << palabra << endl;

    return 0;
}

void convertirMayusculas(char *pPtr)
{
    for (int i = 0; pPtr[i] != '\0'; i++)
    {
        if (pPtr[i] > 96 && pPtr[i] < 123)
        {
            pPtr[i] = char(pPtr[i] - 32);
            cout << pPtr[i] << endl;
        }
    }
}

void imprimir(const char *pPtr)
{
    for (int i = 0; pPtr[i] != '\0'; i++)
        cout << pPtr[i];
    cout << "" << endl;
}

void convertirMayusculas2(char *pPtr)
{
    char a = ' ';
    for (int i = 0; *pPtr != '\0'; i++)
    {
        a = *pPtr + 1;
        cout << a << endl;
        *pPtr++;
    }
}

int cubo(int a)
{
    return a * a * a;
}

int cubo2(int *aPtr)
{
    return *aPtr * *aPtr * *aPtr;
}