#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

/*
1)(1,5pontos) Primeiramente,  você  deve  escrever  uma  função chamada soma_numeros para  receber 
 2 (dois) valores e retornar a adição entre esses valores.A função tem que se chamar soma_numeros.
*/

float soma_numeros( float a, float b)
{
	float c= a+b;
	return c;	
}

float subtrai_numeros (float a, float b)
{
	float c= a-b;
	return c;
}

float multiplica_numeros (float a, float b)
{ 
    float c= a * b;
    return c;
}

float divide_numeros (float a, float b)
{
	int c= a/b;
	return c;

}


void opera_numeros(float &a, float &b, float &c, float &d)
{
	float A, B, C, D;
	 A= soma_numeros (a, b);
	 B= subtrai_numeros (a, b);
     C= multiplica_numeros(a, b);
	 D= divide_numeros(a, b);
	
	a= A;
	b= B;
	c= C;
	d= D;
		
}

main()

{
	float a, b, c, d, x, y;
	cout<< " Digite um numero: ";
	cin>> x;
	cout<< " Digite outro numero: ";
    cin>> y;
    a=x;
    b=y;
    opera_numeros (a, b, c, d);
    cout<< "Resultados: \n ";
    cout<< x << "+"<< y << "="<< a << "\n";
    cout<< x<< "-"<< y << "="<< b << "\n";
    cout << x<< " * " << y<<"=" << c << "\n";
    cout << x<< "/"<< y << "="<< d << "\n";
    
}
