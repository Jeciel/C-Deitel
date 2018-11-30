#include <iostream>

using namespace std;

void quick(int *, int *);

main()
{
	int A[] = {12, 6, 5, 7, 10 ,11, 3, 1, 9};
	for(int i=0; i<9; i++)
		cout << &A[i] << "\t";
	cout << endl;

	quick(A, &A[8]);

	for(int i=0; i<9; i++)
		cout << A[i] << "\t";
	cout << endl;
	
}

void quick(int *I, int *F)
{
	int *i=I, *f=F, n=*I, temp=0;
	
	while(i != f)
	{
		if(*i>*f)
		{
			temp = *i;
			
			*i=*f;
			*f=temp;

			if(*i != n)
				i++;
			else
				f--;
		}
		else
		{
			if(*i == n)
				f--;
			else
				i++;
		}
	}

	cout << "I=" << &*I << endl << "F=" << &*F << endl << "i=" << &*i << endl << "f=" <<&*f << endl << endl;
	if(I != i && I!= i-1)
		quick(I, i-1);
	if(F != f && f != F-1)
		quick(f+1, F);
}