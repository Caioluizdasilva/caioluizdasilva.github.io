#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

enum Xrainha{ pontuacao=10};
enum Xrainha rainha;

enum Xcor{ valor=-1};
enum Xcor branco;

enum Xpeca{ pontuacao=7, valor= -1};
enum Xpeca torre;


string XrainhapraTexto (enum Xpeca n)
{
    switch (n)
    {
	
	case pontuacao : return "RAINHA";
	case valor : return "BRANCO";
	}
}

main()
{
	int i;
	enum Xpeca torre;
	cout<< "Forneca o numero associado a sua peca...\n";
	cout<<"1- Peao";
	cout<<"3-Bispo";
	cout<< "4- cavalo";
	cout<< "7- torre";
	cout<< "10- Rainha";
	cout<<"11-Rei";
	
	cin>> i;
	if(i>= 1 && i<= 11){
		cout<< "Você escolheu a peca "<< XrainhapraTexto(xpeca);
	}
	else{
		cout<< "peca invalida";
	}
}
