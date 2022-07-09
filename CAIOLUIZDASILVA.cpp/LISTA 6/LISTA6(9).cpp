#include <iostream>
using namespace std;

 void soma (int M[][], int M[][]) 
{

	   for(I= 0; I < NL; I++)
	   for(J= 0; J < NC; J++)
	   M[I][J] =  M[I][J] +  M[I][J];
	   
}

 main()
{
	const int NL= 2; // qtd de linhas
	const int NC= 3; // qts de colunas
	
	
	int M[NL][NC], I, J;// M= matriz. Na hora de declarar a matriz sempre colocar o número de linas e de colunas.
	 
	 
	 I=0;
	 while (I < NL)
	 {
	   J=0;
	    for (I=0; I < NL; I= I+ 1)
	   for ( J=0; J < NC; J++)
	   {
	   	cout<< " Forneca o elemento da linha "<< I<< " e coluna "<< J<< ".";
	   	cin >> M[I][J];
	   }
	   soma(M[I][J], N[I][J]);
	   
	   cout << "\nResultado: \n\n";
	   for (I=0; I < NL; I= I+ 1)
	   {
	   	for(J= 0; J < NC; J= J+ 1)
	   	cout<< M[I][J] << "\n";
	   }
	 I++;
    }
    
  getchar();  
}

 
 
 
 
 
 
 
 
 
 
 
 J = 0;
 while ( I < NC)
 {
 	cout<< a[I]
 	J = J+1 
 }

