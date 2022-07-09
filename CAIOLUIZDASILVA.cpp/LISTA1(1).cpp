#include <conio.h>
#include <iostream>
using namespace std;

/*
.Você deve escrever um módulo para receber um único parâmetro do tipo texto e  escrevê-lo  de  volta 
 à  tela  do  computador. Atenção:  este  módulo  não  retorna resultado; apenas executa o processamento
 referente à escritade um texto na saída  do  computador. Em  seguida, chameeste  módulo 
 a partir de um  módulo mainpara testar seu programa.
 */
 
 void texto(string t)
 {
   cin>> t;
   cout<< " texto digitado foi: " << t;
   
 }
 

 main()
{
	string x;
	cout<< " Digite o texto:";
	texto (x);

}

