
#include "Matriz.h"
#include <iostream>

int main(){
    Matriz m = Matriz(3);
    std::cout<< m.len()<<std::endl;
}
/*#include <iostream>

using namespace std;
const int row = 5, col = 5;

void suma(int[], int[], int[]);
void suma(int[][col], int[][col], int[][col]);
void reversa(int[], int);


int main()
{
    
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {1, 2, 3, 4, 5};
    int C[] = {0, 0, 0, 0, 0};

    suma(A, B, C);

    int D[row][col] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    int E[row][col] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    int F[row][col] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};

    suma(D, E, F);

    for (int i = 0; i < col; i++)
        cout << C[i] << " ";
    cout << "" << endl;

    for (int i = 0; i < col; i++)
    {
        cout << endl;
        for (int j = 0; j < row; j++)
            cout << F[i][j] << " ";
    }

    cout << "" << endl;

    int tam = 9;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 

    for (int i = 0; i < tam; i++)
        cout << a[i] << " ";
    cout << "" << endl;

    reversa(a, tam);
    
    for (int i = 0; i < tam; i++)
        cout << a[i] << " ";
    cout << "" << endl;

    return 0;
}

void reversa(int a[], int tam){
    for(int inf = 0,  sup = tam-1,  temp = 0; sup>inf; sup--, inf++)
    {
        temp=a[inf];
        a[inf] = a[sup];
        a[sup] = temp;
    }
}

void suma(int A[], int B[], int C[])
{

    for (int i = 0; col > i; i++)
        C[i] = A[i] + B[i];
}

void suma(int A[][col], int B[][col], int C[][col])
{
    for (int i = 0; row > i; i++)
        for (int j = 0; j < col; j++)
            C[i][j] = A[i][j] + B[i][j];
}*/