#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

char maiuscula (char c)
{
	if ( c >= 'a' && c <= 'z')
	return c + ('A'- 'a');
	else return c;
}

main()
{
	char carac; 
	cout<< "FORNECA UM CARACTERE: ";
	cin >> carac;
	carac = maiuscula(carac);
	cout<< carac;
}
