#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;


// Programe  o  m�dulo strlen,  supondo  que  ele  ainda  n�o  exista.  Teste  seu m�dulo em um m�dulo main.//
 
 int tamanhoDotexto (char texto[])
 {
 	 int t;
 	 t= 0;
 	 while (texto[t] != '\o')
 	 t++;
 	 return t;
 }
 
 main()
 {
 	char s1[40];
	char s2[40];
	
	strcpy (s1, "Estudo no");
	strcpy (s2, "CEFET- NF");
	
    cout<< "TAMANHO DO TEXTO: "<< tamanhoDotexto(s1);
 }
