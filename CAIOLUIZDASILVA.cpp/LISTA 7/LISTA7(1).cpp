#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

// Programe  o  m�dulo strcat,  supondo  que  ele  ainda  n�o  exista.  Teste  seu m�dulo em um m�dulo main//

void concatenacao ( char texto[], char texto1[])
{
	string t1, t2;
	t1= texto;
	t2= texto1;
	strcpy (texto, t1. c_str());
}
 main()
{
	char s1[40];
	char s2[40];
	
	strcpy (s1, "Estudo no");
	strcpy (s2, "CEFET-NF");
	
	concatenacao (s1, s2);
	cout<< s1 << s2;
}
