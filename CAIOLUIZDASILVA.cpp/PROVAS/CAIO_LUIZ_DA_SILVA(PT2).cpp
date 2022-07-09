#include <iostream>
#include <math.h>
using namespace std;
 
float maiorDaColecao(float v[], int N){
    int i = 0;
    float maior=v[0];
    for(i=0; i<N; i++)
	{
        if(maior < v[i])
		{
            maior = v[i];
        }
    }
    return maior;
}


float menorDaColecao(float v[], int N)
{
    int i = 0;
    float menor=v[0];
    for(i=0; i<N; i++)
	{
        if(menor > (v[i]))
		{
            menor = v[i];
        }
    }
    return float(menor);
}


float mediaDaColecao(float v[], int N){
    int i = 0;
    float soma=0;
    for(i=0; i<N; i++)
	{
            soma += v[i];
    }
    return soma/float(N);
}

float desvioPadraoDaColecao(float v[], int N)
{
     float m = mediaDaColecao(v, N), s=0;
     for(int i=0; i<N; i++)
	 {
         s += pow((v[i] - m),2);
     }
     return sqrt(s/(float)N);
}
main()
{
      int i, N;
      cout << "QUANTIDADE DE ALUNOS: ";
	  cin  >> N;
	  
	  float v[N];
	  
	  for (i = 1; i <= N; i++)
	  {
	  cout << "NOTA DO ALUNO " << i << ": ";
	  cin >> v[i-1];
	  }
	  
	  cout << "\n";
	  cout << "MAIOR NOTA -----> " << maiorDaColecao(v, N) << "\n";
	  cout << "MENOR NOTA -----> " << menorDaColecao(v, N) << "\n";
	  cout << "NOTA MEDIA -----> " << mediaDaColecao(v, N) << "\n";
	  cout << "DESVIO PADRAO --> " << desvioPadraoDaColecao(v, N) << "\n";
 } 

 


