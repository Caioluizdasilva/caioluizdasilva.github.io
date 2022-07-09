#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int menorMaior (int n, int i) 
{
 high=0, low=1e10;

    cout<<"Digite 2 numeros:\n";
    for (i=0; i<2; i++)
    {
        cin>>n;
        if (n>high)
            high=n;
        if (n<low)
            low=n;
    }
    cout<<"O maior numero e "<<high<<", o menor e "<<low<<".\n";

    return 0;
}
int quantidadedeDivisores ( int A, int B)
{
	int CD= 0 , DB= 0;
	for(int i= 1; i<=A, I++)
	{
		if( A%i == 0)
		{
			CD = CD +1;
		}
	}
	for ( int y=1; y==B; y++)
	{ 
	if( B%y == 0)
	{
		DB = DB + 1;
	}
	}
	cout<< "QUANTIDADE DE DIVISORES DE "<<A<< "eh:"<<CD;
	cout<< "QUANTIDADE DE DIVISORES DE "<<B<< "eh:"<<DB;
}

int primo( int a, int b)

	int CD= 0 , DB= 0;
	for(int i= 1; i<=A, I++)
	{
		if( A%i == 0)
		{
			CD = CD +1;
		}
	}
	for ( int y=1; y==B; y++)
	{ 
	if( B%y == 0)
	{
		DB = DB + 1;
	}
	
}

if ( CD==2)
{
	cout<< "\n primalidade do valor"<< a<< " : VERDADEIRO";
}
if ( CD !=2)
{
cout<< "\n primalidade do valor"<< a<< " : FALSO";
}
if ( DB==2)
{
	cout<< "\n primalidade do valor"<< b " : VERDADEIRO";
}
if ( DB !=2)
{
cout<< "\n primalidade do valor"<< b<< " : FALSO";
}


main ()
int n,b
bool i, n, t
cout<< " Entre com o 1o. numero: n\" ; 
cin>> n;
cout<< " Entre com o 2o. numero : \n";
cin>> b;

 i = menorMaior  (a);
 n =quantidadedeDivisores (b);
t = primo (a,b);


