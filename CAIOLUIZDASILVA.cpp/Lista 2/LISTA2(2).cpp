/* Escreva um m�dulo para converter uma temperatura da escala Celsius para a escala  Fahrenheit. 
A  f�rmula  de  convers�o  � 1.8 * c+ 32 =F,  onde  F  �  a temperatura em Fahrenheit e C � a temperatura em Celcius.
Seu m�dulo deve retornar o  valor  da  temperatura  em  Fahrenheit. 
Em  seguida, chame este m�dulo a partir de um m�dulo main para testar seu programa
*/

#include <iostream>
#include <math.h>
using namespace std;

float celciusFahrenheit( float c)
{
	return (1.8 * c)+ 32;
}
main()
{
	cout<< "A temperatura em Fahrenheit eh: "<< celciusFahrenheit (23)<< "F";
}
