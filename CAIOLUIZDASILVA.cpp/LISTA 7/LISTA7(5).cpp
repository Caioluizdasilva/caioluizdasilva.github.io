#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

char minuscula (char &c)
{
	if ( c >= 'A' && c <= 'Z')
	return c - ('A'- 'a');
	else return c;
}

main()
{
	char carac; 
	cout<< "FORNECA UM CARACTERE: ";
	cin >> carac;
	carac = minuscula(carac);
	cout<< carac;
}
