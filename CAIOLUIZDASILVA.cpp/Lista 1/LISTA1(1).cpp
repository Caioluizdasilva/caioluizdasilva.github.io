#include <conio.h>
#include <iostream>
using namespace std;

/*
.Voc� deve escrever um m�dulo para receber um �nico par�metro do tipo texto e  escrev�-lo  de  volta 
 �  tela  do  computador. Aten��o:  este  m�dulo  n�o  retorna resultado; apenas executa o processamento
 referente � escritade um texto na sa�da  do  computador. Em  seguida, chameeste  m�dulo 
 a partir de um  m�dulo mainpara testar seu programa.
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

