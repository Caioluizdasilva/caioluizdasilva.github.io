#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Treslts
{
	int x1, x2, y1, y2, mx, my;
} geral;

int Tpontos( struct Tresults geral)
{
	geral.mx= (geral.x1+ geral.x2)/2;
	geral.my= (geral.y1+ geral.y2)/2;
}

main()
{
	cout << "Digite um valor para x : /n":
	cin>> geral.x1;
	cout>> "Digite um valor para Y: /n";
	cin>> geral.x2;
	
	cout<<"Os valores são, Abscissa: " <<geral.mx<<"," "odenada: "<< geral.my<<".";
	
	getch();
	
}
