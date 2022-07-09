#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void imprimeVetor(int[],int);
int qtdeDeDivisores(int);
void listaDeDivisores(int, int[]);
int qtdeDeElementosIguais(int[], int, int[], int);
void listaDeDivisoresIguais(int[], int, int[], int, int[]);


main()
{
int x, y, qx, qy;
cout<< "FORNECA O PRIMEIRO NUMERO: ";  
cin>> x;
cout<< "FORNECA O SEGUNDO  NUMERO: ";  cin >> y;
cout<< "\n";
cout<< "QUANTIDADE DE DIVISORES DE " << x << ": " << qtdeDeDivisores(x) << "\n\n";
cout<< "QUANTIDADE DE DIVISORES DE " << y << ": " << qtdeDeDivisores(y) << "\n\n";
qx = qtdeDeDivisores(x);
qy = qtdeDeDivisores(y);

int X[qx];
int Y[qy];

listaDeDivisores(x, X);
listaDeDivisores(y, Y);
cout << "DIVISORES DE " << x << ":\n";
imprimeVetor(X, qx);cout << "\n";
cout << "DIVISORES DE " << y << ":\n";
imprimeVetor(Y, qy);cout << "\n";

int qz = qtdeDeElementosIguais(X, qx, Y, qy);
int Z[qz];
cout << "QUANTIDADE DE DIVISORES IGUAIS ENTRE " << x << " E " << y << ": " << qz << "\n\n";
listaDeDivisoresIguais(X, qx, Y, qy, Z);
cout << "DIVISORES IGUAIS ENTRE " << x << " E " << y <<":\n";
imprimeVetor(Z, qz);

getch();

}

void imprimeVetor(int v[], int tam)
{
int i;
for(i = 0; i < tam; i++)
cout << v[i] << "\n";
}

int qtdeDeDivisores (int a)
{
  int i, r = 0;
  for (i=1; i<=a; i++)
    if (a % i == 0)
    r++;
  return r;
}

void listaDeDivisores(int x, int y[])
{
	for(int i = 0; i <r,i++)
	{
		cout << int x[]<<"\n";
		cout << int y[]<< "\n";
	}
}


