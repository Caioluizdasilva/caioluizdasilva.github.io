

/*
1)(5,0 pontos)Uma função para receber duas datas. Esta função deve retornar:
    -1, se a primeira data for anterior à segunda data;
     0, se ambas as datas forem iguais;
    +1, se a primeira data for maior que a segunda data.
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
using  namespace std;
 
 main()
 {
 	int dia, mes, ano;
 	cout ("Digite o dia da primeira data: ");
 	cin( "%d", &dia);
 	cout("Digite o mes da primeira data: ")
 	cin( "%d", &mes);
	cout("Digite o ano da primeira data: ")
 	cin( "%d", &ano);
 	getch();
 	}
 	
 	int( int d, int m, int a)
 	{
 		time_t horaDoSo;
 		struct tm *tempo;
 		
 		int dia, mes, ano;
 		
 		tempo = ( struct tm *) malloc ( sizeof( strict tm));
 		time(&horaDoSO);
 		tempo = lecaltime ( &horaDoSO);
 		dia  = tempo ->tm_mday;
 		mes  = tempo ->tm_mon + 1;
 		ano  = tempo -> tm_year + 1900;
 		free(tempo)
 	}
 	   
 	   int  compararDias ( int dia, int mes, int ano, int dia1, int mes1, int ano1)
 	   if( ano = ano1)
 	   	 {
			
 	   	    if( mes= mes1)
 	   	    {
 	   	    	if ( dia= dia1)
 	   	    	  
 	   	    	      return -1 : 
 	   	    }
 	   	    else
 	   	    { 
 	   	        if( dia= dia1)
 	   	        {
 	   	        	return 0:
				}
				else
				{
					return +1
				}
 /*	   	    
	2) (5,0 pontos) Outra função para receber duas datas. A primeira data representa o nascimento de alguma pessoa. A 
segunda data representa a data atual. Essa função deve retornar a idade, em anos, da pessoa nascida na data 
representada pelo primeiro parâmetro da função. Se, por acaso, a primeira data for posterior à segunda data, a 
função deve retornar -1, indicando que a pessoa ainda não nasceu.
*/

{
 	int dia, mes, ano;
 	cout ("Digite o dia do seu nascimento: ");
 	cin( "%d", &dia);
 	cout("Digite o mes do seu nascimento: ")
 	cin( "%d", &mes);
	cout("Digite o ano do seu nascimento: ")
 	cin( "%d", &ano);
 	getch();
 	}
 	
 	int( int d, int m, int a)
 	{
 		time_t horaDoSo;
 		struct tm *tempo;
 		
 		int dia, mes, ano;
 		
 		tempo = ( struct tm *) malloc ( sizeof( strict tm));
 		time(&horaDoSO);
 		tempo = lecaltime ( &horaDoSO);
 		dia  = tempo ->tm_mday;
 		mes  = tempo ->tm_mon + 1;
 		ano  = tempo -> tm_year + 1900;
 		free(tempo)
 	}











