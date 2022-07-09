#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

void tabela()
{
	int i; 
	char c;
	for( i=0; i<256; i++)
	{
		c = (char) i;
		cout<< i << "--->"<< c<< "\n";
    }
}
main()
{
	tabela();
}
